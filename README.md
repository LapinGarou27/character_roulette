# character_roulette
Program designed for choosing randomly a character when you don't know who to choose
# 🎲 Character Roulette

## 📖 Description

Character Roulette is a small terminal-based program written in C.
The goal of this project is to experiment with low-level programming concepts and create a simple interactive tool that randomly selects a character.

This project was created as a learning exercise to practice working with the C language, Makefiles, and terminal interfaces.

## 🛠️ Technologies Used

* **C**
* **Makefile**
* **ncurses** (terminal interface)
* Custom utility library (**libmy**)

## ⚙️ Features

The program provides the following functionality:

* Randomly selects a character from a predefined list
* Displays results in a terminal interface
* Uses a simple window-based layout in the terminal
* Demonstrates modular C project organization

## 📦 Dependencies

To build and run this project, the following tools and libraries are required:

* **gcc** – C compiler
* **make** – build automation tool
* **ncurses** – library used to create terminal interfaces

### Example installation (Linux)

Debian / Ubuntu:

```
sudo apt install build-essential libncurses-dev
```

Arch Linux:

```
sudo pacman -S base-devel ncurses
```

Fedora:

```
sudo dnf install gcc make ncurses-devel
```

## 📁 Project Structure

```
📁 character_roulette
 ├── main.c
 ├── window.c
 ├── forsaken.c
 ├── Makefile
 ├── include/
 │   ├── my.h
 │   └── rchar.h
 └── lib/
     └── my/
```

## 🚀 Compilation

To compile the program:

```
make
```

This will generate the executable defined in the Makefile.

## ▶️ Usage

After compiling, run the program from the terminal:

```
./character_roulette
```

The program will display a terminal interface and randomly select a character.

## 🎯 Purpose

The objective of this project is to:

* Practice **C programming**
* Understand **project structure and modular code**
* Learn how to use **Makefiles**
* Experiment with **terminal interfaces using ncurses**

## ⚠️ Disclaimer

This project is a **learning exercise** and is not intended to be a production-ready application.

## 👤 Author

Personal learning project.
