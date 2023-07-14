#include <iostream>

void DrawBoard();

char myNumbers[9] = {};

int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
    printf("Enter your name: ");
    scanf("%s", FirstPerson);
    DrawBoard();

}

void DrawBoard() {

    printf("Welcome to Tic Tac Toe!\n");
    printf("You will be X and the computer will be O.\n");
    printf("  %c    | %c  | %c\n ", myNumbers[0], myNumbers[1], myNumbers[2]);
    printf(" ----|---|----\n");
    printf("  %c    | %c  | %c\n", myNumbers[3], myNumbers[4], myNumbers[5]);
    printf("  ----|---|----\n");
    printf("  %c    |  %c | %c\n", myNumbers[6], myNumbers[7], myNumbers[8]);

}

