#include <iostream>
#include <unistd.h>

//Name of our class that we made to help us with the game
void DrawBoard();

void GetInputForComputer();

void GetUserInput();

bool FindWinner(bool Player1);
// The reason why in each index I added a space is so when
// someone enter a move it will replace the space with an X or O easily
//and it won't affect the diagram because the space is the same size as the X and O
// so the diagram already assume that there is a space there, so it will have no effect
char myNumbers[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '}; //This is the array that will hold the position
// so let say someone changes the index 0  to X or O it will be stored in this array
// and from there we know where to place it on our diagram

//I made it global, so I change it in any function, and it will be changed in all of them
//Make it cleaner so when I get the user input it will automatically change the null
// to an x and zero, and I can just call the function to draw the board, and it will be
// updated without me having to send anything else

//Also I made every index null so when I first print it , it won't have anything in it




int main() {
    srand(time(NULL)); //This will make sure that the random number is different
    char FirstPerson[20];  // Assuming a maximum length of 100 characters
    printf("Enter your name: ");
    scanf("%s", FirstPerson);//Getting the person name
    printf("Hello %s\n", FirstPerson);
    printf("Welcome to Tic Tac Toe!\n");
    printf("Player 1 will be X and the computer will be O.\n");
    DrawBoard(); //Calling the function to draw the board
    //This will be called after each go
    sleep(3); //This will make the program wait for 5 seconds
    int i = 0;
    bool player1 = true;//So the player will go first and when this is set to false
    //That mean it the computer turn, so we are using this to know who turn it is
    while(i < 9){ // This will loop 9 times because we have 9 boxes once it goes through all of them
        //then we can assume that it a draw
        if (player1){ // is if player1 is true then get the user input
            printf("Player 1 : Please enter a go\n");
          GetUserInput();
            if (FindWinner(player1)){
                printf("Congratulations Player %s, YOU ARE THE WINNER! ",FirstPerson);
                return 0;
            } //This will check if the player won
            //if there is a winner then end the game
            player1 = false; //Then set it to false because it is the computer turn
        }
        else{
            printf("Computer. Please enter a go\n");
            GetInputForComputer(); //and if not then it must be the computer turn
            //This will check if the player won
            //if there is a winner then end the game
            if (FindWinner(player1))return 0;

            player1 = true; //Then set it to true because it is the player  turn
        }
        printf("\n");
        sleep(3); //This will make the program wait for 3 seconds

        i++;
    }
    printf("Game Over\n");//if it goes through then print this
    printf("The result was a draw\n");
    printf("Thanks for playing %s\n", FirstPerson);

}

bool FindWinner(bool Player1) { // This is the function that will check if their is a winner
    // and it will take the player1 and the name of the person
    //The reason I am taking the name is that I don't want c
    //to do the same thing for the computer when it not the computer go
    //so whoever turn it is it will check if that person move resulted in a win
    // because if it unnecessary to check if the computer won when it not the computer turn

    if (Player1) {
        //We are checking every possible way a person can win
        //then printing it out with the Name
        if (myNumbers[0] == 'X' && myNumbers[1] == 'X' && myNumbers[2] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[3] == 'X' && myNumbers[4] == 'X' && myNumbers[5] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[6] == 'X' && myNumbers[7] == 'X' && myNumbers[8] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[0] == 'X' && myNumbers[3] == 'X' && myNumbers[6] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[1] == 'X' && myNumbers[4] == 'X' && myNumbers[7] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[2] == 'X' && myNumbers[5] == 'X' && myNumbers[8] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[0] == 'X' && myNumbers[4] == 'X' && myNumbers[8] == 'X') {
            printf("Game Over\n");
            return true;
        } else if (myNumbers[2] == 'X' && myNumbers[4] == 'X' && myNumbers[6] == 'X') {
            printf("Game Over\n");
            return true;
        }
    }
    else { //so if it not the player turn then it must be the computer turn
        //so we are doing the same
        if (myNumbers[0] == 'O' && myNumbers[1] == 'O' && myNumbers[2] == 'O') {
            printf("Game Over\n");
            printf("Congratulations COMPUTER, YOU ARE THE WINNER! ");
            return true;
        } else if (myNumbers[3] == 'O' && myNumbers[4] == 'O' && myNumbers[5] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
            return true;
        } else if (myNumbers[6] == 'O' && myNumbers[7] == 'O' && myNumbers[8] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
          return true;
        } else if (myNumbers[0] == 'O' && myNumbers[3] == 'O' && myNumbers[6] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
            return true;
        } else if (myNumbers[1] == 'O' && myNumbers[4] == 'O' && myNumbers[7] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
            return true;
        } else if (myNumbers[2] == 'O' && myNumbers[5] == 'O' && myNumbers[8] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
            return true;
        } else if (myNumbers[0] == 'O' && myNumbers[4] == 'O' && myNumbers[8] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
            return true;
        } else if (myNumbers[2] == 'O' && myNumbers[4] == 'O' && myNumbers[6] == 'O') {
            printf("Game Over\n");
            printf("Congratulations  COMPUTER, YOU ARE THE WINNER! ");
            return true;
        }
    }
    return false; //if the check failed to find any winner then it returns false


}

void GetUserInput() {
    printf("Enter a number between 1 and 9: \n");
    int input;
    scanf("%d", &input); //Getting the user input
    printf("\n");

    if (input > 9 || input < 1) { //Checking if the input is valid
        // if it not valid then it will ask the user to enter a valid input
        // and we will recall the method, so he can type in a valid input
        printf("Invalid input, please try again\n");
        GetUserInput();
    }
    //if it already taken then we can not take it again and call the same method
    // sp he can enter a valid input
    else if (myNumbers[input - 1] == 'X' || myNumbers[input - 1] == 'O') {
        printf("Invalid input, please try again\n");
        printf("Please check the board and enter a spot that empty \n");
        GetUserInput();
    }
    else { //then we add it in our array and draw the board again
        //since the array it global we can access it from any method
        // that mean in our DrawBoard method we already have the updated array
        //without having to send anything to the method
        myNumbers[input - 1] = 'X';
        DrawBoard();
    }

}

//Since we have to implement a random number generator
void GetInputForComputer() {
    //This is what I had most trouble with , I had to look up how to
    // use the rand() method because it was not working when I did it the orinial way
    //After researching I found out that I had to use srand() method and a couple of other
    // things to make it work like the addition

   int ran =  (rand() % (9 - 1 + 1)) + 1;// random number between 1 and 9
    if (myNumbers[ran - 1] == 'X' || myNumbers[ran - 1] == 'O') {
        GetInputForComputer(); // if the spot is taken then we call the method again
    }
    else {
        myNumbers[ran - 1] = 'O';
        DrawBoard();//if not then we will add it to the array and draw the board
    }

}

void DrawBoard() {
//This will be called after each go
// it will draw the board with the updated array
//So everytime we update the array we call this method
//and c will look in the global variable that already updated and draw the board
// since we first created the array with everything null , it won't just leave
// a blank space where %c is
//This is draw in a way that it will look like a tic-tac-toe board even
//if an area is blank and or if there is an x or o in it

        printf("  %c  | %c | %c\n ", myNumbers[0], myNumbers[1], myNumbers[2]);
        printf(" ---|---|----\n");
        printf("  %c  | %c | %c\n", myNumbers[3], myNumbers[4], myNumbers[5]);
        printf("  ---|---|---\n");
        printf("  %c  | %c | %c\n", myNumbers[6], myNumbers[7], myNumbers[8]);

}


