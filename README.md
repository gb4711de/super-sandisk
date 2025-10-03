# super-sandisk

A simple CMake-based CLI application.

## Building

To build the application, you need CMake (version 3.10 or higher) and a C++ compiler.

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

## Running

After building, you can run the application:

```bash
./build/super-sandisk [options]
```

## Installation

To install the application system-wide:

```bash
cd build
sudo cmake --install .
```