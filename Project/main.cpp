#include <iostream>

void DrawBoard();

void DrawBoard(bool b, char i, int marker);
char myNumbers[9] = {};
int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
   char Computer[10] = "Computer";
   bool GameStart = false;
    printf("Enter your name: ");
    scanf("%s", FirstPerson);
    char FirstMarker = 'X';
    char SecondMarker = 'O';
    DrawBoard(GameStart, FirstMarker,0);
    GameStart = true;
    printf("%c",myNumbers[2]);

}

void DrawBoard(bool b, char i,int marker) {
    if (!b) {
          printf("Welcome to Tic Tac Toe!\n");
        printf("   |   | \n");
        printf("---|---|---\n");
        printf("   |   | \n");
        printf("---|---|---\n");
        printf("   |   | \n");
        printf("You will be X and the computer will be O.\n");
        return;
    }
    if (marker == 0) {
        printf("   |   | \n");
        printf(" %c |   | \n", i);
        printf("---|---|---\n");
        printf("   |   | \n");
        printf("---|---|---\n");
        printf("   |   | \n");
        return;
    }

}

