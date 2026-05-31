# LastHaven

> Game from scratch, built in C++

## Building

### Prerequisites

- CMake
  3.28 or newer is required, see [CMakeLists file](./CMakeLists.txt#1) for more information.

> [!IMPORTANT]
> Information provided as seen on on [cppreference](https://cppreference.com/cpp/compiler_support#cpp23)[^1]
>
> [^1]: Last time this information was reviewed is 2026-05-31

- C++23 compiler
  - Clang 13 or newer
  - GCC 11 or newer

### Configuration

Simplest form of configuring CMake for this project is to run following command:
```sh
$ cmake -S. -B build
```

### Building

After configuring this project you should be able to build it by running following command:

```sh
$ cmake --build build
```

### Installing

If build was successful you can install it by running following command:

```sh
$ cmake --install build
```

## License

LastHaven is licensed under the BSD 3 clause [license](https://opensource.org/license/bsd-3-clause/), for more information see the [LICENSE](./LICENSE) file.
