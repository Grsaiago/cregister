# cregister

cregister - read as 'see register' - is a C library that exposes functions
to read values from x86 GPRs (General Purpose Registers) at run time
(the pun is absolutely intended xD).

## Project Structure

```sh
cregister/
|- lib/ # 
    |- cregister.h # main header file, whould be included if you want to use it.
|- obj/ # Where the transitive dependencies are placed.
|- src/ # Where the implementation lives.
|- libcregister.a # The eventualy generated archive file.
|- README.md # This file xD.
|- Makefile # The build file.
```

## Supported Registers

The lib currently supports reading values from the following registers:

- [rax](/src/get_rax.c)
- [rbp](/src/get_rbp.c)
- [rcx](/src/get_rcx.c)
- [rdi](/src/get_rdi.c)
- [rdx](/src/get_rdx.c)
- [rsi](/src/get_rsi.c)
- [rsp](/src/get_rsp.c)
- [r8](/src/get_r8.c)
- [r9](/src/get_r9.c)
- [r10](/src/get_r10.c)
- [r11](/src/get_r11.c)
- [r12](/src/get_r12.c)
- [r13](/src/get_r13.c)
- [r14](/src/get_r14.c)
- [r15](/src/get_r15.c)

## Build Insctuctions

The build system used is GNU's Makefile.\
Just run `make lib` and it'll generate an archive file that you can then link
your executable to!

The current available rules are:

- help      Prints help for targets with comments
- lib       Creates the archive file (the .a)
- test      Create the test executable
- clean     Deletes the transitive dependencies (the .o files and any test binaries)
- fclean    Deletes the transitive dependencies and the archive file (.o and .a)

## License

This project is licensed under the MIT License. See LICENSE for details.
