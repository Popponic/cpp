// LibrarySystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


struct Books {
    int isbn;
    string title;
    string author;
    int copies;
    float cost;
};

int isBookAvailable(Books book[3], string usertitle, string userauthor) {
    for (int i = 0; i < 3; i++) {
        if (usertitle == book[i].title && userauthor == book[i].author) {
            return i;
        }
        else {
        }
    }
    return 3;
};

float totalCost(int copy[3], float price[3], int book) {
    float result = price[book] * copy[book];
    return result;

};


int main()
{
    struct Books book[3];
    
    for (int i = 0; i < 3; i++) {
        cout << "Enter the ISBN of the book: ";
        cin >> book[i].isbn;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter the title of the book: ";
        getline(cin, book[i].title);
        
        cout << "Enter the author's name: ";
        getline(cin, book[i].author);
        
        cout << "Enter the amount of copies: ";
        cin >> book[i].copies;
        
        cout << "Enter the cost of the book: ";
        cin >> book[i].cost;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    /*for (int j = 0; j < 3; j++) {
        cout << book[j].isbn << endl;
        cout << book[j].title << endl;
        cout << book[j].author << endl;
        cout << book[j].copies << endl;
        cout << book[j].cost << endl;
    }*/

    string usertitle, userauthor;
    int availability;

    cout << "\nEnter the title of the book you wish to borrow: ";
    getline(cin, usertitle);
    cout << "Enter the name of the author: ";
    getline(cin, userauthor);

    availability = isBookAvailable(book, usertitle, userauthor);

    if (availability < 3) {
        cout << "pog moment: book real!";
    }
    else {
        cout << ":((((((((((((((((";
    }

    int copies[3];
    float cost[3];

    for (int k = 0; k < 3; k++) {
        copies[k] = book[k].copies;
        cost[k] = book[k].cost;
    }

    float totalcost;

    totalcost = totalCost(copies, cost, availability);

    cout << "\n\nThe total cost of " << usertitle << ", by " << userauthor << " is $" << totalcost << endl;






}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
