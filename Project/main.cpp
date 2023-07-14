#include <iostream>

void DrawBoard();

void GetInputForComputer();

void GetUserInput();

char myNumbers[9] = {};
//A way to get the players to take turns.-done
//
//A 3x3 grid in which to store the turns/character of the two players. -> done
//
//A way of displaying the grid. -> dome
//
//Some way of specifying where to place the mark on the grid and checking to see if it’s a valid go. ->done
//
//Use a random function to generate the computers location. ->done
//
//A method of finding out if one of the players has won.

int main() {
    char FirstPerson[100];  // Assuming a maximum length of 100 characters
    printf("Enter your name: ");
    scanf("%s", FirstPerson);//Getting the person name
    DrawBoard(); //Calling the function to draw the board
    //This will be called after each go
    int i = 0;
    bool player1 = true;
    while(i < 9){
        if (player1){
          GetUserInput();
            player1 = false;
        }
        else{
            GetInputForComputer();
            player1 = true;
        }


        i++;
    }
    printf("Game Over\n");
    printf("The result was a draw\n");
    printf("Thanks for playing %s\n", FirstPerson);

}

void GetUserInput() {
    printf("Enter a number between 1 and 9: \n");
    int input;
    scanf("%d", &input);

    if (input > 9 || input < 1) {
        printf("Invalid input, please try again\n");
        GetUserInput();
    }
    else if (myNumbers[input - 1] == 'X' || myNumbers[input - 1] == 'O') {
        printf("Invalid input, please try again\n");
        printf("Please check the board and enter a spot that empty \n");
        GetUserInput();
    }
    else {
        myNumbers[input - 1] = 'X';
        DrawBoard();
    }

}

void GetInputForComputer() {
    srand(time(NULL));
   int ran =  (rand() % (9 - 1 + 1)) + 1;// random number between 1 and 9
    if (myNumbers[ran - 1] == 'X' || myNumbers[ran - 1] == 'O') {
        GetInputForComputer();
    }
    else {
        myNumbers[ran - 1] = 'O';
        DrawBoard();
    }

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


