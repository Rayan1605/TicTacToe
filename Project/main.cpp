#include <iostream>

void DrawBoard();

void DrawBoard(char i, int marker);
char myNumbers[9] = {};
int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
   char Computer[10] = "Computer";
    printf("Enter your name: ");
    scanf("%s", FirstPerson);
    char FirstMarker = 'X';
    char SecondMarker = 'O';
    DrawBoard(FirstMarker,0);

}

void DrawBoard(char i,int marker) {

          printf("Welcome to Tic Tac Toe!\n");
        printf("   |   | \n");
        printf("---|---|---\n");
        printf("   |   | \n");
        printf("---|---|---\n");
        printf("   |   | \n");
        printf("You will be X and the computer will be O.\n");

}

