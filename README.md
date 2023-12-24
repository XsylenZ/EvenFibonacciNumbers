# Install

The program can be built via the installation script, within any Linux/MacOS environment with a “bash” shell and CMake version 3.7 or higher. The code is written in C++11:

```
$ ./install.sh
```

When the build has finished successfully it will prompt:

```
To run the executable: ./build/EvenFibonacciNumbers
```

If the installation script does not work, you can also choose to compile the code manually with the following steps:

```
$ mkdir build
$ cd ./build
$ cmake ..
$ make EvenFibonacciNumbers
```

After that run the program:

```
$ ./build/EvenFibonacciNumbers
```


