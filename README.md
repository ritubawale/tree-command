# Tree Command Implementation in C

## Overview

This project is an implementation of the `tree` command in C. The `tree` command is a recursive directory listing program that produces a depth-indented listing of files. With this implementation, users can visualize the directory structure in a tree-like format.

## Features

- Recursively list directories and files.
- Depth-indented directory tree display.
- Options to include hidden files and set depth limits.

## Requirements

- GCC Compiler (or any C compiler)
- Linux/Unix operating system (for optimal compatibility)

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/ritubawale/tree-command.git
    cd tree-command
    ```

2. Compile the program using the Makefile:
    ```bash
    make
    ```

3. Run the program:
    ```bash
    ./tree
    ```

## Usage

```bash
./tree [OPTIONS] [DIRECTORY]
```

### Options

- `-a` : Include hidden files in the listing.
- `-L [level]` : Limit the display to a specific depth of directories.

### Examples

1. Display the tree structure of the current directory:
    ```bash
    ./tree
    ```

2. Display the tree structure of a specific directory:
    ```bash
    ./tree /path/to/directory
    ```

3. Include hidden files in the listing:
    ```bash
    ./tree -a
    ```

4. Limit the display to a depth of 2 levels:
    ```bash
    ./tree -L 2
    ```


