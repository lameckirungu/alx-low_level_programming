# 0x1C. C - Makefiles

## Introduction

This repository contains a collection of C programs developed as part of the `0x1C. C - Makefiles` project at ALX Software Engineering School. The project aims to introduce the concept of Makefiles and provide hands-on experience in creating them.

## Table of Contents

1. [Learning Objectives](#learning-objectives)
2. [Requirements](#requirements)
3. [Project Structure](#project-structure)
4. [How to Use](#how-to-use)
5. [Tasks](#tasks)
6. [Island Perimeter](#island-perimeter)

## Learning Objectives

- Understand what make and Makefiles are.
- Learn when, why, and how to use Makefiles.
- Understand rules and how to set and use them.
- Differentiate between explicit and implicit rules.
- Learn about common and useful rules.
- Understand variables and how to set and use them.

## Requirements

- **Allowed editors:** `vi`, `vim`,`emacs`
- **Operating System:** Ubuntu 20.04 LTS
- **Version of `gcc`:** 9.3.0
- **Version of `make`:** GNU Make 4.2.1
- **All files should end with a new line.**

## Project Structure

- **0x1C-makefiles/**
  - **0-Makefile**: Create your first Makefile.
  - **1-Makefile**: Specify compiler and source files in the Makefile.
  - **2-Makefile**: Create a useful Makefile with additional variables.
  - **3-Makefile**: Implement advanced rules like clean, oclean, fclean, and re.
  - **4-Makefile**: Complete Makefile with compiler flags and advanced rules.
  - **5-island_perimeter.py**: Python function for calculating island perimeter.
  - **README.md**: This README file.

## How to Use

1. Clone this repository to your local machine.
2. Navigate to the desired Makefile directory (`0x1C-makefiles`).
3. Use the `make` command followed by the filename (e.g., `0-Makefile`, `1-Makefile`, etc.) to execute the Makefile and build the executable.
4. Refer to each Makefile's specific instructions and tasks for more details.

## Tasks

Each Makefile corresponds to a specific task. Here's a brief overview:

### **0-Makefile**: Create the first Makefile.
Create your first Makefile.

Requirements:

* name of the executable: `holberton`
* rules: `all`
  * The `all` rule builds your executable
* variables: none

**Solution:** [0-Makefile](https://github.com/lameckirungu970/alx-low_level_programming/blob/master/0x1C-makefiles/0-Makefile)

```
root@cdc984679a20:~/alx-low_level_programming/0x1C-makefiles# make -f 0-Makefile
gcc main.c school.c -o school
root@cdc984679a20:~/alx-low_level_programming/0x1C-makefiles# ./school
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
```
### **1-Makefile**: Specify compiler and source files.

Requirements:

* name of the executable: `school`
* rules: `all`
    * The `all` rule builds your executable
* variables: `CC`, `SRC`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files

**Solution:** [1-Makefile](https://github.com/lameckirungu970/alx-low_level_programming/blob/master/0x1C-makefiles/1-Makefile)

```
root@cdc984679a20:~/alx-low_level_programming/0x1C-makefiles# make -f 1-Makefile
gcc main.c school.c -o school
root@cdc984679a20:~/alx-low_level_programming/0x1C-makefiles# make -f 1-Makefile
gcc main.c school.c -o school
```

### **2-Makefile**: Introduce additional variables and rules.
Requirements:

* name of the executable: `school`
* rules: `all`
    * The `all` rule builds your executable
* variables: `CC`, `SRC`, `OBJ`, `NAME`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
* The `all` rule should recompile only the updated source files
* You are not allowed to have a list of all the ``.o`` files

**Solution:** [2-Makefile](https://github.com/lameckirungu970/alx-low_level_programming/blob/master/0x1C-makefiles/2-Makefile)

```
cdc984679a20:0x1C-makefiles:# make -f 2-Makefile                                                                           <master ✗>
gcc -c -o main.o main.c
gcc -c -o school.o school.c
gcc main.o school.o -o school
cdc984679a20:0x1C-makefiles:# make -f 2-Makefile                                                                           <master ✗>
make: Nothing to be done for 'all'.
cdc984679a20:0x1C-makefiles:# echo "/* School */ >> main.c                                                                 <master ✗>
dquote>
cdc984679a20:0x1C-makefiles:# echo "/* School */" >> main.c                                                                <master ✗>
cdc984679a20:0x1C-makefiles:# make -f 2-Makefile                                                                           <master ✗>
gcc -c -o main.o main.c
gcc main.o school.o -o school
```

### **3-Makefile**: Implement advanced rules like clean, oclean, fclean, and re.
Requirements:

* name of the executable: `school`
* rules: `all`, `clean`, `oclean`, `fclean`, `re`
    * `all`: builds your executable
    * `clean`: deletes all Emacs and Vim temporary files along with the executable
    * `oclean`: deletes the object files
    * `fclean`: deletes the Emacs temporary files, the executable, and the object files
    * `re`: forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
    * `RM`: the program to delete files
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never fail
* You are not allowed to have a list of all the `.o` files

**Solution:** [3-Makefile](https://github.com/lameckirungu970/alx-low_level_programming/blob/master/0x1C-makefiles/3-Makefile)
```
cdc984679a20:0x1C-makefiles:# make all -f 3-Makefile         <master ✗>
make: Nothing to be done for 'all'.
cdc984679a20:0x1C-makefiles:# rm -f main.o school.o          <master ✗>
cdc984679a20:0x1C-makefiles:# make all -f 3-Makefile         <master ✗>
gcc  -c -o main.o main.c
gcc  -c -o school.o school.c
gcc main.o school.o -o school
cdc984679a20:0x1C-makefiles:# make  -f 3-Makefile            <master ✗>
make: Nothing to be done for 'all'.
cdc984679a20:0x1C-makefiles:# make clean -f 3-Makefile       <master ✗>
rm -f *~ \#* *.swp school
cdc984679a20:0x1C-makefiles:# make oclean -f 3-Makefile      <master ✗>
rm -f main.o school.o
cdc984679a20:0x1C-makefiles:# make fclean -f 3-Makefile      <master ✗>
rm -f *~ \#* *.swp school
rm -f main.o school.o
cdc984679a20:0x1C-makefiles:# make all -f 3-Makefile         <master ✗>
gcc  -c -o main.o main.c
gcc  -c -o school.o school.c
gcc main.o school.o -o school
cdc984679a20:0x1C-makefiles:# make re -f 3-Makefile          <master ✗>
rm -f main.o school.o
gcc  -c -o main.o main.c
gcc  -c -o school.o school.c
gcc main.o school.o -o school
```


### **4-Makefile**: Complete Makefile with compiler flags and advanced rules.


Requirements:

* name of the executable: `school`
* rules: `all`, `clean`, `fclean`, `oclean`, `re`
    * `all`: builds your executable
    * `clean`: deletes all Emacs and Vim temporary files along with the executable
    * `oclean`: deletes the object files
    * `fclean`: deletes the Emacs temporary files, the executable, and the object files
    * `re`: forces recompilation of all source files
* variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    * `CC`: the compiler to be used
    * `SRC`: the `.c` files
    * `OBJ`: the `.o` files
    * `NAME`: the name of the executable
    * `RM`: the program to delete files
    * `CFLAGS`: your favorite compiler flags: `-Wall` `-Werror` `-Wextra` `-pedantic`
* The `all` rule should recompile only the updated source files
* The `clean`, `oclean`, `fclean`, `re` rules should never fail
* You are not allowed to have a list of all the `.o` files

**Solution:** [4-Makefile](https://github.com/lameckirungu970/alx-low_level_programming/blob/master/0x1C-makefiles/4-Makefile)
```
cdc984679a20:0x1C-makefiles:# make all -f 4-Makefile         <master ✗>
gcc -Wall -Werror -Wextra -pedantic -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic -c -o school.o school.c
gcc main.o school.o -o school
cdc984679a20:0x1C-makefiles:#                                <master ✗> 
```

## Island Perimeter

The `5-island_perimeter.py` file contains a Python function to calculate the perimeter of an island described in a grid. It follows specific requirements and restrictions, as outlined in the file.
- Create a function `def island_perimeter(grid): `that returns the perimeter of the island described in grid:
- `grid `is a list of list of integers:
   - `0` represents a water zone
   - `1`  represents a land zone
   - One cell is a square with side length 1
   - Grid cells are connected horizontally/vertically (not diagonally).
   - Grid is rectangular, width and height don’t exceed 100

- Grid is completely surrounded by water, and there is one island (or nothing).
-  The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:
First line contains ` #!/usr/bin/python3`
You are not allowed to import any module
Module and function must be documented

**Solution:** [5-island_perimeter.py](https://github.com/lameckirungu970/alx-low_level_programming/blob/master/0x1C-makefiles/5-island_perimeter.py)

```
cdc984679a20:0x1C-makefiles:# cat 5-main.py                  <master ✗>
#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
    grid = [
            [0, 0, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 0, 0, 0, 0],
            [0, 1, 1, 1, 0, 0],
            [0, 0, 0, 0, 0, 0]
            ]
    print(island_perimeter(grid))
cdc984679a20:0x1C-makefiles:# ./5-main.py                    <master ✗>
12

```
## Contributors
- [lamiru](https://github.com/lameckirungu970)

## Credits
These programs are part of the ALX Low Level Programming Curriculum. Special thanks to ALX!

## Licence
[MIT](https://choosealicense.com/licenses/mit/)



