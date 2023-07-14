#include <iostream>

void DrawBoard();

void DrawBoard(bool b, char i, int marker);

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
    printf("check");
}

