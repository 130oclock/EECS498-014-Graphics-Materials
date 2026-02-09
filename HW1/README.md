# EECS 498/598 Computer Graphics and Generative Models

Starter code for HW1 of EECS 498/598 Computer Graphics and Generative Models.
Reminder that all changes should be made in `rasterizer_impl.cpp`.

## Build

To build this project using the CMakeLists.txt provided, enter the rasterizer directory. Create a build directory, and call cmake from inside of the build directory.

```bash
cd rasterizer
mkdir build
cd build
cmake ..
```

Then you can call make from inside of the build folder to compile the project.

```bash
make
```

To run the project, use the following command. Be sure to run it from inside of the rasterizer directory, otherwise the project will not recognize the object files.

```bash
./build/Rasterizer ./sample-tests/<config>.yaml
```

## Contributors

Created by [@ARessegetesStery](https://github.com/ARessegetesStery) and [@AnemoCider](https://github.com/AnemoCider). Edits by [@130oclock](https://github.com/130oclock).

Instructed by [Prof. Jeong Joon Park](https://jjparkcv.github.io/).
