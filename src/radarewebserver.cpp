#include <QCoreApplication>
#include <QProcessEnvironment>
#include <cassert>
#include "cutter.h"
#include "radarewebserver.h"

RadareWebServer::RadareWebServer(CutterCore *core) :
    core(core),
    started(false)
{
    // MEOW
}

RadareWebServer::~RadareWebServer()
{
}

void RadareWebServer::start()
{
    assert(core != nullptr);

    // FIXME: quick & dirty work around to get this in AppImage working
    QProcessEnvironment env(QProcessEnvironment::systemEnvironment());
    if (env.contains("APPIMAGE") && env.contains("APPDIR") && env.contains("OWD"))
    {
        // pretty sure now cutter runs as AppImage

        //QString defaultPath("/usr/share/radare2/1.5.0-git/www");
        QString defaultHttpRoot(core->getConfig("http.root"));
        if (defaultHttpRoot.startsWith("/usr"))
        {
            QString path(QCoreApplication::applicationDirPath());
            path.replace("bin/", defaultHttpRoot.remove("/usr"));

            core->setConfig("http.root", path);
        }
    }

    if (!started && core != nullptr)
    {
        // command: see libr/core/rtr.c
        core->cmd("=h&");
        core->core()->http_up = R_TRUE;
        started = true;
    }
}

void RadareWebServer::stop()
{
    // TODO: =h- waits for ^C
}

bool RadareWebServer::isStarted() const
{
    return started;
}
