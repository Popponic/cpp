// GradeCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float Find_Sum(float g1, float g2, float g3) {
    float gsum;
    gsum = g1 + g2 + g3;
    return gsum;
}

float Find_Avg(float gsum2) {
    float gavg;
    gavg = gsum2 / 3;
    return gavg;
}

int Find_Result(float gavg2) {
    int gresult;
    if (gavg2 >= 80) {
        gresult = 2;
    }
    else if (gavg2 >= 50 && gavg2 < 80) {
        gresult = 1;
    }
    else {
        gresult = 0;
    }
    return gresult;
}

int main()
{
    float grade1, grade2, grade3, sum, avg;
    int result;
    string name;
    
    cout << "put in your name: ";
    cin >> name;
    cout << "put in your first grade: ";
    cin >> grade1;
    cout << "put in your second grade: ";
    cin >> grade2;
    cout << "put in your third grade: ";
    cin >> grade3;
    
    sum = Find_Sum(grade1, grade2, grade3);

    avg = Find_Avg(sum);

    result = Find_Result(avg);

    switch (result) {
    case 0:
        cout << "\nYou, " << name << ", have failed." << endl;
        break;
    case 1:
        cout << "\nYou, " << name << ", have passed." << endl;
        break;
    case 2:
        cout << "\nYou, " << name << ", have passed with a distinct grade average." << endl;
        break;
    }




    return 0;
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
