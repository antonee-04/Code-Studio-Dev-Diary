#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 3;
vector<vector<char>> board(SIZE, vector<char>(SIZE, ' '));

void printBoard() {
    cout << "  0 1 2" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << i << " ";
        for (int j = 0; j < SIZE; ++j) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << "|";
        }
        cout << endl;
        if (i < SIZE - 1) cout << "  -----" << endl;
    }
}

bool isBoardFull() {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}

bool checkWin(char player) {
    for (int i = 0; i < SIZE; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}
char playerSymbol, computerSymbol;

void chooseSymbol() {
    cout << "Choose your symbol (X/O): ";
    cin >> playerSymbol;
    playerSymbol = toupper(playerSymbol);
    if (playerSymbol == 'X') {
        computerSymbol = 'O';
    }
    else if (playerSymbol == 'O')
    {
        playerSymbol = 'O';
        computerSymbol = 'X';
    }
    else {
        cout << "not valid, pick again!" << endl;
        chooseSymbol();
    }
}
void playerMove() {
    int row, col;
    cout << "Enter your move (row): " << endl;
    cin >> row;
    cout << "Enter your move (column): " << endl;
    cin >> col;
    while (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
        cout << "Invalid move. Try again: " << endl;
        cout << "Enter your move (row): " << endl;
        cin >> row;
        cout << "Enter your move (column): " << endl;
        cin >> col;
    }
    board[row][col] = playerSymbol;
}

void computerMove(){
    cout << "the computer is now moving..." << endl;
    srand(time(0));
    int row, col;
    do {
        row = rand() % SIZE;
        col = rand() % SIZE;
    } while (board[row][col] != ' ');
    board[row][col] = computerSymbol;
}

int main() {
    chooseSymbol();
    bool playerTurn = true;
    printBoard();
    while (true) {
        if (playerTurn) {
            playerMove();
        }
        else {
            computerMove();
        }
        printBoard();
        if (checkWin(playerTurn ? playerSymbol : computerSymbol)) {
            cout << (playerTurn ? "Player" : "Computer") << " wins!" << endl;
            break;
        }
        if (isBoardFull()) {
            cout << "It's a tie!" << endl;
            break;
        }
        playerTurn = !playerTurn;
    }
    return 0;
}
