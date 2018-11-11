# A template that uses CMake, Travis-CI and Google Test (without pre-installing Google Test)
Using this template, Google Test is downloaded and unpacked at configure time.
This means that you don't need to 'hardcode' the Google Test library in your
repository.

# Basic template structure
```
/         CMakeLists.txt and CMakeLists.txt.in
/include  Headers (.h)
/src      Source files (.cpp)
/tests    Test files
```

## Tests directory
The tests directory can be organised in any way you prefer.
The only important thing to remember is that there must be only one main
function in the tests folder, which runs all tests (see [test_main.cpp](tests/test_main.cpp)).

# How to build

As the ```TESTING``` flag is off by default, the following command is enough to build your normal program:
```bash
cmake .
```

To build your test program, the ```TESTING``` flag must be passed to the ```cmake``` command, like this:
```bash
cmake -DTESTING=ON .
```

# How to adapt this template to your project

- In [CMakeLists.txt](CMakeLists.txt), insert all your source files (except the file containing
the ```main``` function) in the ```set(SOURCES)``` command on line 18. You can either
do this by manually hardcoding each source file or by using ```file(GLOB SOURCES "src/*.cpp")```
and then removing the file containing the ```main``` function; you can read more about the pros
and cons of either approach [here](https://stackoverflow.com/a/1060061).
You then want to append the file containing your ```main``` function to the ```SOURCES``` list
in the ```else()``` block (on line 62). This is done so that your "standard" ```main``` function
doesn't conflict with your test ```main``` function.
- In [.travis.yml](.travis.yml), change ```./test_template``` on line 33 to the
test program name you selected in ```CMakeLists.txt``` (on line 5 in this case).

# References
https://github.com/google/googletest/tree/master/googletest#incorporating-into-an-existing-cmake-project
https://github.com/bast/gtest-demo
https://github.com/dmonopoly/gtest-cmake-example
