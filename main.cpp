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

    cout << "Please enter the row and col of your action. \n";
    cout << "Action on Player " << playerNumber << ":  \n";
    cin >> chosenRow >> chosenCol;


    board[chosenRow - 1][chosenCol - 1] = actionChar;
    turnCounter++;
}

//win condition
bool checkWin() {
    for (int i = 0; i < 3; i++){
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) && board[i][0] != '*') {
        return true;
        }
    }   return false; 
}


int main() {
    
    //fills the matrix with '*' as place holder
    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board [i][j] = '*';
        }
    }
   
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
  

    
    return 0;
}