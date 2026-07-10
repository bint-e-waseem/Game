# Game
Tic-Tac-Toe
# 🎮 Tic-Tac-Toe Game

A classic two-player Tic-Tac-Toe game implemented in C++ with a clean console interface. This project features a simple yet engaging gameplay experience with input validation, win detection, and replay functionality.

## 📋 Features

- **Two-Player Mode**: Players take turns as 'X' and 'O'
- **Interactive Board**: Numbered grid (1-9) for easy move selection
- **Input Validation**: Prevents overwriting occupied positions and invalid entries
- **Win Detection**: Automatically detects winning combinations (rows, columns, diagonals)
- **Draw Detection**: Identifies when the board is full with no winner
- **Replay Option**: Play multiple rounds without restarting the program
- **Clean Interface**: Well-formatted board display for better user experience

## 🚀 How to Play

1. The game displays a numbered grid:
   ```
   1 | 2 | 3
   ---+---+---
   4 | 5 | 6
   ---+---+---
   7 | 8 | 9
   ```

2. Player 'X' goes first
3. Enter a number (1-9) corresponding to the position you want to mark
4. Players alternate turns
5. The game ends when:
   - A player gets 3 in a row (horizontal, vertical, or diagonal)
   - The board is full (draw)
6. Choose to play again or exit

## 🛠️ Technical Details

### File Structure
- **game.cpp**: Contains all game logic and implementation

### Key Functions
- `displayBoard()`: Renders the current game board
- `isMoveValid(int)`: Validates player input
- `checkWin(char)`: Checks for winning combinations
- `isDraw()`: Detects if the game ends in a draw
- `resetBoard()`: Resets the board for a new game

### Implementation Notes
- Uses a 3x3 character array for the board
- Implements standard Tic-Tac-Toe win detection logic
- Built with C++ standard library (iostream)
- No external dependencies required

## 🧪 Sample Gameplay

```
Player X, enter your move (1-9): 5
 X | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9

Player O, enter your move (1-9): 1
 O | 2 | 3
---+---+---
 4 | X | 6
---+---+---
 7 | 8 | 9
...
```

## 💻 Compilation and Execution

### Prerequisites
- C++ compiler (g++, clang++, or MSVC)

### Compile
```bash
g++ game.cpp -o tic_tac_toe
```

### Run
```bash
./tic_tac_toe       # On Unix/Linux/macOS
tic_tac_toe.exe     # On Windows
```

## 📖 Code Documentation

The code is self-documented with:
- Clear function names and purposes
- Logical flow in `main()` function
- Modular design for easy maintenance
- Simple input/output handling

## 🤝 Contributing

Feel free to fork this repository and add:
- AI opponent
- Score tracking
- Enhanced graphics
- Network multiplayer

## 📝 License

This project is open source and available under the MIT License.

## 🎯 Future Enhancements

- [ ] Implement AI opponent with difficulty levels
- [ ] Add score tracking across multiple rounds
- [ ] Create graphical interface (SDL/SFML)
- [ ] Support custom board sizes
- [ ] Add sound effects
