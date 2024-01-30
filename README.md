# ItemList Test Program with Makefile

This C program, along with a Makefile, tests the functionality of a simple item list (ItemList) using various operations such as adding, removing, and checking for the presence of items.

## How to Use

1. Compile the program using the provided Makefile.

```bash```
make

1. Run the compiled executable.
./Exercise6_2

1. The program will perform several tests on the ItemList and output the results.
2. To clean up compiled files, use:
make clean

## Makefile
## CFLAGS

-Wall: Enable most compiler warnings.
-g: Include debugging information.
Targets
all: Builds the executable using the specified source files and flags.
clean: Removes compiled object files and the executable.
.c.o: A rule to compile C source files into object files.
Code Structure
Refer to the previous README for details on the code structure and usage.

Feel free to use, modify, and share this code as needed!
