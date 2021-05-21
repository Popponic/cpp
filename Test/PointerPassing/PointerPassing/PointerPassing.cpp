// PointerPassing.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct Cats {
    string breed;
    string color;
    string behavior;
    string description;

    // constructor to initialize: keep the same name as the structure
    Cats(string br = "York", string c = "Black", string be = "Lazy", string d = "Little Shit.")
    {
        breed = br;
        color = c;
        behavior = be;
        description = d;
    }


};

Cats* inpur_cats(struct Cats* p)[

]


int main()
{
    struct Cats cat[2];
    struct Cats* ptr, **pptr;

    ptr = cat;
    pptr = &ptr;

    cout << "The memory address of the Cat Array begins at " << ptr << endl;

    cout << "The memory address of the Pointer to the Pointer is " << pptr << endl;

    cout << "\nBreed: " << ptr->breed << endl;
    cout << "Color: " << ptr->color << endl;
    cout << "Behavior: " << ptr->behavior << endl;
    cout << "Description: " << ptr->description << endl;






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
