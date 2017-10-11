<<<<<<< HEAD
# IMPORTANT NOTICE

The project was moved to https://github.com/radareorg/cutter

## Code formatting
=======
# Contributing to Cutter

There are many ways you can contribute to cutter.
The easy one is to open issues with bugs you found on the application.
The second one is to fix issues found in the GitHub issues tracker.

## Opening an issue

Make a clear description of the bug/feature, use screenshots, send binaries, etc.

## Contributing to the code

Note that cutter is still under development and many parts of the code are to be improved.

### CutterCore class

This is the main class where every link with r2 is made. It is *unique* accross the whole process. To access it, simply call `CutterCore::getInstance()`.

### Calling a radare2 command

There are two ways to do it:
* `CutterCore::cmd()` *(Discouraged)* Only use it for commands which yells no output
* `CutterCore::cmdj()` To be used with json commands like `cmdj("agj")` or `cmdj("aflj")`. It is way easier to parse a json output.

### Seek the current file

To modify radare2 seek use `CutterCore::seek(const RVA offset)`. This is important because it will emit a `CutterCore::seekChanged(RVA offset)` signal.
Never ever call cmd("s offset");

### Creating a widget

Make sure to connect the `CutterCore::seekChanged(RVA offset)` signal so your widget refreshes its output when radare2 seek is modified (switching to another function, etc.).

## General coding guidelines

### Code formatting
>>>>>>> f202306920a8b5b86db8e9a94b0f4c58607df97b

We use [AStyle 2.06](https://sourceforge.net/projects/astyle/files/astyle/astyle%202.06/) to format the code. The command line for formatting the code according to the style is:

```bash
AStyle --style=allman --convert-tabs --align-pointer=name --align-reference=name --indent=spaces --indent-namespaces --indent-col1-comments --pad-oper --pad-header --unpad-paren --keep-one-line-blocks --close-templates $(git ls-files *.cpp *.h *.c *.hpp)
```

**If in doubt, check the source around you and follow that style!**
