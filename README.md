# Tic-Tac-Toe (C++)

A terminal-based tic-tac-toe game written in C++. Two-player,
with input validation and win/draw detection.


Image 1: <img width="1950" height="454" alt="image" src="https://github.com/user-attachments/assets/a45fb953-a538-415e-856d-12f2783207e3" />

image 2: <img width="1926" height="206" alt="image" src="https://github.com/user-attachments/assets/b9eecc70-e46a-4ae6-97da-7c8ea5d6c565" />

image 3: <img width="1924" height="220" alt="image" src="https://github.com/user-attachments/assets/b79ef4d9-9fb5-47c0-bd88-86afcbf8c8f8" />

image 4: <img width="1936" height="314" alt="image" src="https://github.com/user-attachments/assets/c53a6096-25f4-44fa-9c9f-b268fb63af6d" />


## Features
- 3x3 board rendered in the terminal
- Alternating player turns
- Input validation (rejects occupied cells and out-of-range moves)
- Win detection across rows, columns, and diagonals
- Draw detection

## Build and run
Requires a C++ compiler (tested with g++ 14 via MSYS2 on Windows).

g++ -o tictactoe main.cpp
./tictactoe

## How it works
The board is stored as a 3x3 char array. Each turn the program
prompts for a cell, validates it, writes the mark, then checks
the eight possible win lines before switching players.

## Things I'd change
- Separate the game logic from the display code so the board
  isn't tied to terminal output
- Add a minimax AI opponent for single-player mode

