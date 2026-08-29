using namespace std;
#include <iostream>
#include <string>


char board [3][3];
int chosenRow;
int chosenCol;
int turnCounter = 0;


void printBoard () { //Function to print board
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
        }
        cout << "\n";
    }
}


void newPlayerTurn() {

int playerNumber = (turnCounter % 2 == 0) ? 1 : 2;
char actionChar = (turnCounter % 2 == 0) ? 'X' : 'O';

    cout << "Please enter the row and col of your action. \n";
    cout << "Action on Player" << playerNumber << ":  \n";
    cin >> chosenRow >> chosenCol;

    board[chosenRow - 1][chosenCol - 1] = actionChar;
    turnCounter++;
}


int main() {
    
    //fills the matrix with '*' as place holder
    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board [i][j] = '*';
        }
    }
    //call the function to place the first board
    printBoard();
        newPlayerTurn(); // Turn 1


    //call the function to place the first X
    printBoard();
        newPlayerTurn(); // Turn 2

   
    printBoard();
        newPlayerTurn(); // Turn 3

    printBoard();
        newPlayerTurn(); // Turn 4

    printBoard();
        newPlayerTurn(); // Turn 5

    printBoard();
        newPlayerTurn(); // Turn 6

    
    return 0;
}