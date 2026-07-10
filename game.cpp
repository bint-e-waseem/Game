#include <iostream>
using namespace std;
char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool isMoveValid(int move) {
    if (move < 1 || move > 9) return false;
    int r = (move - 1) / 3;
    int c = (move - 1) % 3;
    return board[r][c] != 'X' && board[r][c] != 'O';
}

bool checkWin(char p) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == p && board[i][1] == p && board[i][2] == p) return true;
        if (board[0][i] == p && board[1][i] == p && board[2][i] == p) return true;
    }
    if (board[0][0] == p && board[1][1] == p && board[2][2] == p) return true;
    if (board[0][2] == p && board[1][1] == p && board[2][0] == p) return true;
    return false;
}

bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
    return true;
}

void resetBoard() {
    char k = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = k++;
}

int main() {
    char player = 'X';
    int move;
    char choice;

    do {
        resetBoard();
        player = 'X';

        while (true) {
            displayBoard();
            cout << "Player " << player << ", enter your move (1-9): ";
            cin >> move;

            if (!isMoveValid(move)) {
                cout << "Invalid move. Try again.\n";
                continue;
            }

            int r = (move - 1) / 3;
            int c = (move - 1) % 3;
            board[r][c] = player;

            if (checkWin(player)) {
                displayBoard();
                cout << "Player " << player << " wins!\n";
                break;
            }

            if (isDraw()) {
                displayBoard();
                cout << "It's a draw!\n";
                break;
            }

            player = (player == 'X') ? 'O' : 'X';
        }

        cout << "Play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
