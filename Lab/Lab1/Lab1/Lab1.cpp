// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Additional Functions

// Function to draw a line based on the desired length.
void Draw_Line(int size) {
    int i;
    for (i = 0; i < size; i++) {
        cout << "-";
    }
    cout << "\n" << endl;
}

// Function to draw the initial hangman at the beginning of the game.
void Draw_Hangman() {
    cout << "   _____  " << endl;
    cout << "  |     |    " << endl;
    cout << "  |     O   " << endl;
    cout << "  |    \\|/   " << endl;
    cout << "  |     |   " << endl;
    cout << "  |    / \\   " << endl;
    cout << "  |         " << endl;
    cout << "-----      " << endl;

}

// Function to 'free' the hangman upon a correct guess by the user.
void Free_Hangman() {
    cout << endl;
    cout << "     O   " << endl;
    cout << "    \\|/   " << endl;
    cout << "     |   " << endl;
    cout << "    / \\   " << endl;
}

// Function to invert the hangman upon failing the game.
void Invert_Hangman() {
    cout << "   _____  " << endl;
    cout << "  |     |    " << endl;
    cout << "  |    /|\\   " << endl;
    cout << "  |     |   " << endl;
    cout << "  |    /|\\   " << endl;
    cout << "  |     O   " << endl;
    cout << "  |         " << endl;
    cout << "-----      " << endl;
}


// Function to check the user's answer to then return whether it's true/correct or false/wrong.
bool Check_Answer(char answer) {
    bool result = false;
    
    if (answer != 'b') {
        result = false;
    }
    else {
        result = true;
    }

    return result;
}


// Main program
int main()
{
    // Defining data types for the main program to utilize.
    int i; // Loop counter
    char answer; // User input
    bool result = false; // Boolean that operates based on the relation between the user's input and the correct answer.
    
    //Header section
    cout << "Welcome to Hangman Lite Minus! The very, very simple hangman game to check your basic spelling skills!" << endl;
    
    // Calling the line drawing function. Using an argument of 100 in this instance to draw 100 horizontal lines.
    Draw_Line(100);
    
    // Calling the hangman drawing function. Doesn't need an argument.
    Draw_Hangman();
    
    // Gameplay loop. Repeats in the instance that the user is wrong.
    for (i = 0; i < 3; i++) {
        cout << "\nGuess the missing letter in Ro_otnik: ";
        cin >> answer;
        answer = tolower(answer); // Converts the answer to lowercase to make the answer checking function simpler.
        result = Check_Answer(answer); // Assiging main's boolean to the returned boolean from Check_Answer, using the user's input as an argument.
        if (result == true) {
            cout << "\nYour guess is correct! You freed the man!" << endl;
            Free_Hangman(); // Calling the free hangman/walkman drawing function.
            return 0; // Ending the program early due to the user winning. Good Ending.
        }
        else
        {
           switch (i) { // Dynamic response system based on the amount of attempts the user has left.
           case 0:
                cout << "\nOops, incorrect! Try again. (2 Attempts Remaining)" << endl;
                break;
           case 1:
                cout << "\nNot quite! Try again. (1 Attempt Remaining)" << endl;
                break;
           case 2:
               cout << "\nOuch, that's also wrong!" << endl;
               break;
            }
        }
        
    }
    
    cout << "\nYou have ran out of attempts! I don't know what happened, but he's upside down now :/" << endl;
    
    // Calling the inverted hangman drawing function.
    Invert_Hangman();
    
    // Ending the program later due to the user failing. Bad Ending.
    return 0;

}
