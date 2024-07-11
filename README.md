#Linumiz
# pwd Command in C

This is a simple implementation of the Linux `pwd` (print working directory) command in C. The program retrieves and prints the current working directory without using pre-built Linux applications or functions like `system()` or `popen()`.

## Features

- Prints the current working directory.
- Uses standard C library functions.
- Works in a Linux environment.

## Requirements

- A Linux environment.
- A C compiler (e.g., `gcc`).

## Installation

1. **Clone the repository:**
    ```sh
    git clone <repository_url>
    cd <repository_directory>
    ```

2. **Compile the program:**
    ```sh
    gcc -o pwd pwd.c
    ```

## Usage

Run the compiled program:

```sh
./pwd
