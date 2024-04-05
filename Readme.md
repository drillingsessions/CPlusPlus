
# CPP Environment setup

Hello from Drilling sessions!

This is a guide to setup your C++ development environment.

Steps we will cover :
- Install VSCode
- Install C++ compiler (for example clang)
- Install build system (for example cmake)

Source files (main.cpp and CMakeLists.txt) are located in the repository.

## VSCode installation
Head over to [VSCode web site](https://code.visualstudio.com/), download installer for your operating system and simply follow the installation instructions.

If "Add to context menu" option is provided during the installation (usually available for Windows), we suggest to select one.
It will simplify opening directories and files in VSCode.

## Clang and CMake installation
The installation process is different for different platforms.
We will cover Windows, MacOS and Linux (Ubuntu) only.
In case you're using different OS, please try to do some drilling yourself 😊.

### Windows
Head over to [LLVM installation page](https://github.com/llvm/llvm-project/releases/tag/llvmorg-17.0.1), download installer for your architecture (normally LLVM-*-win64.exe should do), and follow the installation instructions.

Head over to [CMake web site](https://cmake.org/), download the installer and follow installation instructions.

**Please make sure to add each tool to PATH environment variable**
This option should be provided by installer. Otherwise, please do it manually.

### Linux (Ubuntu)
Open the terminal and execute following commands
```bash
sudo apt update
sudo apt install -y clang cmake
``` 

To verify everything was installed correctly, try to fetch each tool version by executing
```bash
clang --version
cmake --version
```

### MacOS
Open the terminal and execute following commands
```bash
brew update
brew install llvm cmake
``` 

To verify clang was installed correctly, try to fetch its version by executing
```bash
clang --version
cmake --version
```

# Happy coding 😎
