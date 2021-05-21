// Don't Point That Thing At Me!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void SearchFunc(float searchentry, float arr[5]) {
    for (int i = 0; i < 5; i++) {
        if (searchentry == arr[i]) {
            cout << " Your search was successful: " << arr[i] << " is in the age database!" << endl;
            return;
        }
        else {
            cout << " Searching..." << endl;
        }
    }
    cout << " Your search was unsuccessful: No data found." << endl;
}
//
//float SortArray(int sorttype, float arr[5]) {
//
//}

int main()
{
    /*int age = 10;
    int* ptrage;

    ptrage = &age;

    cout << "The value of age is " << age << endl;
    cout << "The value of the age Pointer is " << *ptrage << endl;
    cout << "The memory address of age using the poiner is " << ptrage << endl;
   */

    /*float age1 = 10, age2 = 15, avgage;
    float* ptrage;
    float* ptrage2;

    ptrage = &age1;
    ptrage2 = &age2;

    avgage = (*ptrage + *ptrage2) / 2;

    cout << "The average of " << *ptrage << " and " << *ptrage2 << " is " << avgage << endl;*/

    float ages[5] = { 10, 12, 14, 16, 18 };
    float* ptrages;
    int userchoice = 0;
    float searchentry;

    ptrages = ages;
    cout << "Welcome to the Age Pointer Thing Program!" << endl;
    cout << "*****************************************" << endl;
    while (userchoice != 4) {
        cout << "*****************************************" << endl;
        cout << "* Menu                                  *" << endl;
        cout << "* 1. Search                             *" << endl;
        cout << "* 2. Sort                               *" << endl;
        cout << "* 3. Filter                             *" << endl;
        cout << "* 4. Exit                               *" << endl;
        cout << "*****************************************" << endl;
        cout << " Choose your option: ";
        cin >> userchoice;
        switch (userchoice) {
        case 1:
            cout << " Enter a search query: ";
            cin >> searchentry;
            SearchFunc(searchentry, ptrages);
        }
    }

     
   

 

}
