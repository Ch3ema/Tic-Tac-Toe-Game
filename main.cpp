using namespace std;
#include <iostream>
#include <string>


char board [3][3];
int chosenRow;
int chosenCol;
int turnCounter = 0;


//prints board
void printBoard () { 
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
        }
        cout << "\n";
    }
}


//cycles through turns
void newPlayerTurn() {

int playerNumber = (turnCounter % 2 == 0) ? 1 : 2;
char actionChar = (turnCounter % 2 == 0) ? 'X' : 'O';

    cout << "Action on Player " << playerNumber << ":  \n";
    cin >> chosenRow >> chosenCol;

    //prohited action conditions
    while (chosenRow < 1 || chosenRow > 3 || chosenCol< 1 || chosenCol > 3 
        || board[chosenRow - 1][chosenCol -1 ] != '*' || cin.fail()) 
        {
            cout << "Invalid input, please try again. \n";
            cin.clear(); 
            cin.ignore(1000, '\n');
            cin >> chosenRow >> chosenCol;
        }
    
    board[chosenRow - 1][chosenCol - 1] = actionChar;
    turnCounter++;
}

//win conditions
bool checkWin() {
    //Row win 
    for (int i = 0; i < 3; i++){
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) && board[i][0] != '*') {
        return true;
        }
    }    
    //Col win
    for (int i = 0; i < 3; i++){
        if ((board[0][i] == board[1][i] && board[0][i] == board[2][i]) && board[0][i] != '*') {
        return true;
        }
    }
    //primary diagonal win   
    if (board [0][0] == board[1][1] && board [0][0] == board [2][2] && board [0][0] != '*') {
        return true;
    }
    //secondary diagonal win
    if (board [2][0] == board[1][1] && board [2][0] == board [0][2] && board [2][0] != '*') {
        return true;
    }
    return false; 
}

int main() {

    char playAgainAnswer;
    bool playAgain = true;
    while (playAgain) {

    //fills the matrix with '*' as place holder
    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board [i][j] = '*';
        }
    }
    cout << "Please enter the row and col of your action. \n";

    //Runs the game
    for (int i = 0; i < 9; i++) { 
    int playerNumber = (turnCounter % 2 == 0) ? 1 : 2;

        printBoard();
            newPlayerTurn();
                if (checkWin()) {
                    cout << "Player " << playerNumber << " wins! \n";
                    printBoard();
                    break;  
        }
}
    if (!checkWin()) {
        cout << "It's a draw!";
    }

    cout << "Play again? (y or n) \n";
    cin >> playAgainAnswer;

    if (playAgainAnswer == 'y') {
        playAgain = true;
        turnCounter--;}
    else {
        playAgain = false;
        cout << "Game over."; }
}
    return 0;
}