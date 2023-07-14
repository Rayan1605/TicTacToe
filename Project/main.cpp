#include <iostream>

void DrawBoard();

void DrawBoard(bool b, char i);

int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
   char Computer[10] = "Computer";
   bool GameStart = false;
    printf("Enter your name: ");
    scanf("%s", FirstPerson);
    char FirstMarker = 'X';
    char SecondMarker = 'O';
    DrawBoard(GameStart, FirstMarker);
    GameStart = true;

}

void DrawBoard(bool b, char i) {
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


}