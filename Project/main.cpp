#include <iostream>

void DrawBoard();

void DrawBoard();
char myNumbers[9] = {};

int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
   char Computer[10] = "Computer";
    printf("Enter your name: ");
   // scanf("%s", FirstPerson);
    char FirstMarker = 'X';
    char SecondMarker = 'O';
    DrawBoard();

}

void DrawBoard() {
/*
    printf("Welcome to Tic Tac Toe!\n");
    printf("   |   | \n");
    printf("---|---|---\n");
    printf("   |   | \n");
    printf("---|---|---\n");
    printf("   |   | \n");
    printf("");
    printf("  \n");
*/
    printf(" %c  | %c  | %c\n", myNumbers[0], myNumbers[1], myNumbers[2]);
    printf("---- |---- |----\n");
    printf(" %c  | %c  | %c\n", myNumbers[3], myNumbers[4], myNumbers[5]);
    printf("---- |---- |----\n");
    printf(" %c  |  %c | %c\n", myNumbers[6], myNumbers[7], myNumbers[8]);
    printf("You will be X and the computer will be O.\n");

}

