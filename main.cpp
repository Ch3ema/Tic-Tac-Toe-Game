using namespace std;
#include <iostream>
#include <string>

int main() {

    char board [3][3];

    //fills the matrix with '*' as place holder
    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board [i][j] = '*';
        }
    }

    //prints the matrix
    for (int i= 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           cout << board [i][j] << " ";
        }
        cout << "\n";
    }


    
    return 0;
}