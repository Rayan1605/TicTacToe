#include <iostream>

void DrawBoard();

void GetInput();

char myNumbers[9] = {};

int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
    printf("Enter your name: ");
    scanf("%s", FirstPerson);//Getting the person name
    DrawBoard(); //Calling the function to draw the board
    //This will be called after each go
    int i = 0;
    bool player1 = true;
    int direction;
    while(i < 9){
        if (player1 == true){
            printf("Player. Please enter a number: 1-9 ");
            scanf("%d", &direction);
            player1 = false;
        }
        else{
         GetInput();
            player1 = true;
        }


        i++;
    }

}

void GetInput() {

}

void DrawBoard() {
//This will be called after each go
    printf("Welcome to Tic Tac Toe!\n");
    printf("You will be X and the computer will be O.\n");
    printf("  %c    | %c  | %c\n ", myNumbers[0], myNumbers[1], myNumbers[2]);
    printf(" ----|---|----\n");
    printf("  %c    | %c  | %c\n", myNumbers[3], myNumbers[4], myNumbers[5]);
    printf("  ----|---|----\n");
    printf("  %c    |  %c | %c\n", myNumbers[6], myNumbers[7], myNumbers[8]);
}


