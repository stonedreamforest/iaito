# Cutter [![Build Status](https://travis-ci.org/radareorg/cutter.svg?branch=master)](https://travis-ci.org/radareorg/cutter)

A Qt and C++ GUI for radare2 reverse engineering framework (originally Iaito)

# IMPORTANT NOTICE
The project was moved to https://github.com/radareorg/cutter

## Screenshot

![Screenshot](https://raw.githubusercontent.com/radareorg/cutter/master/Screenshots/Screenshot.png)

## Disclaimer

Cutter is not aimed at existing radare2 users, it is focused on those whose are not yet radare2 users because of the learning curve, they don't like CLI applications or the difficulty/instability of radare2.

**IMPORTANT:** the current status is **highly unstable**, it is an alpha version aimed for developers. Users please wait for the first stable release with installers.

## Requirements

- **Radare2**: Make sure that, when cloning the project, you use `git clone --recurse-submodules` or run `git submodule update --init` to clone the correct radare2 version. Then execute the following command in the radare2 folder:
```
sys/install.sh
```

- QtCreator and Qt: Right now *cutter* uses Qt 5.9.1, you will need the latest QtCreator and Qt added during the installation:
    - Download: https://www.qt.io/ide/
    - Add Qt 5.9.1: http://doc.qt.io/qtcreator/creator-project-qmake.html

## Platforms

Cutter is developed on OS X, Linux and Windows. The first release for users will include installers for all three platforms.

## Documentation

Proper documentation and website will be created before the first release.

Roadmap information for developers can be found [here](https://github.com/radareorg/cutter/tree/master/docs/Roadmap.md).

## Help

Right now the best place to obtain help from *cutter* developers and community is joining this telegram group:

- https://t.me/iaito
