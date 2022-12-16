# Dynamic Libraries

This repository contains some files that were used in the understanding of "Dynamic Libraries"

- The files with the .o extension are called 'obj' or object files which are basically your normal C - code files converted to binary or machine code. This is done by using the command
```Bash
gcc -c filename1.c filename2.c -fpic
```

- The object files are produced and you can link them together to create a custom library
```Bash
gcc filename1.o filename2.o -shared libraryname.so
```
To be continued...
