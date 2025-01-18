#include <iostream>
using namespace std;

void drawBoard(char board[3][3]) //draw function
{
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

int main(){

    // Initialize the board and players
    char board[3][3] = { { ' ', ' ', ' ' },
                         { ' ', ' ', ' ' },
                         { ' ', ' ', ' ' } };
    char player = 'X';
    int row, col;
    int turn; // Declare turn here

    cout << "Welcome to Tic-Tac-Toe!\n";

     // Game loop
    for (turn = 0; turn < 9; turn++) {
        // Draw the board
        drawBoard(board);

        // Prompt for valid input
        while (true) {
            cout << "Player " << player
                 << ", enter row (0-2) and column (0-2): ";
            cin >> row >> col;

            if (board[row][col] != ' ' || row < 0 || row > 2
                || col < 0 || col > 2) {
                cout << "Invalid move. Try again.\n";
            }
            else {
                break; // Valid input, exit the loop.
            }
        }
    }
    return 0;
}