// Array[2] Electric Boogaloo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

void arrloop(int arr[2][2]) {
    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "enter a number: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    /*string name[5];
    
    cout << "Store 5 names of people!!!!!\n" << endl;

    for (i = 0; i < 5; i++) {
        cout << "Enter a name: ";
        cin >> name[i];
    }

    cout << "\n\nGood job!!!!\n" << endl;

    for (i = 0; i < 5; i++) {
        cout << name[i] << endl;
    }

    cout << "\nLol, look at these idiots!" << endl;

    return 0;*/

    /*int i, grade[5];

    string student[5][2];

    for (i = 0; i < 5; i++) {
        cout << "Enter a name: ";
        cin >> student[i][0];
        cout << "Enter a grade: ";
        cin >> student[i][1];
    }

    for (i = 0; i < 5; i++) {
        cout << student[i][0] << " | " << student[i][1] << endl;
    }

    cout << "\nOkay." << endl;

    return 0;*/

    /*int i, j, n, k;

    cout << "Enter the number of rows (LIMIT 100): ";
    cin >> n;
    cout << "Enter the number of columns (LIMIT 100): ";
    cin >> k;

    string student[100][100];

    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            cout << "Enter something: ";
            cin >> student[i][j];
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            cout << student[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "\nOkay." << endl;

    return 0;

    cout << " |_ vs _| / 1920 x 1080 vs 1080 x 1920 / 1080p vs 1920p / Columns & Rows vs Rows & Columns / Bros > Hoes vs Hoes > Bros / Everyone Else vs Jack";*/

    int i, j, a[2][2], b[2][2], c[2][2], d[1][2], k = 0, l = 1, m, temp = 0;

    cout << "\ta input\n" << endl;

    /*for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "enter a number: ";
            cin >> a[i][j];
        }
        cout << endl;
    }*/

    arrloop(a);

    cout << "\n\tb input\n" << endl;

    /*for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << "enter a number: ";
            cin >> b[i][j];
        }
        cout << endl;
    }*/

    arrloop(b);

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
        cout << endl;
    }

    cout << "\n\ta matrix\n" << endl;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << a[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "\n\tb matrix\n" << endl;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << b[i][j] << " | ";
        }
        cout << endl;
    }

    cout << "\n\tC Matrix\n" << endl;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            cout << c[i][j] << " | ";
        }
        cout << endl;
    }

    

    cout << " |_ vs _| / 1920 x 1080 vs 1080 x 1920 / 1080p vs 1920p / Columns & Rows vs Rows & Columns / Bros > Hoes vs Hoes > Bros / Everyone Else vs Jack";



        for (j = 0; j < 2; j++) {
            for (m = 0; m < 2; m++) {
                temp = temp + (a[j][k] * b[k][l]);
                k++;

            }
            d[0][j] = temp;
            l--;
            k = 0;
            temp = 0;
        }
        cout << endl;

        cout << "\n\tD Matrix\n" << endl;

        for (i = 0; i < 1; i++) {
            for (j = 0; j < 2; j++) {
                cout << d[i][j] << " | ";
            }
            cout << endl;
        }

        cout << "\nOkay." << endl;

        return 0;

    /*srand(time(0));
    float arr[5][3];
    int i = 0, j, temp;

    arr[i][0] = rand() % 100;

    for (i = 1; i < 5; i++) {
        temp = rand() % 100;
        for (j = 0; j <= i; j++) {
            if (temp == arr[j][0]) {
                break;
            }
            else if (j == i) {
                arr[i][0] = temp;

            }
        }
    }

    for (i = 0; i < 5; i++) {
        arr[i][1] = pow(arr[i][0], 2);
    }

    for (i = 0; i < 5; i++) {
        arr[i][2] = sqrt(arr[i][0]);
    }

    cout << " ---\t\t\t\t\t\t  ---" << endl;
    cout << "|\t\t\t\t\t\t     |" << endl;
    cout << "| Random Numbers\tSquares\t\tSquare Roots |" << endl;

    for (i = 0; i < 5; i++) {
        cout << "| " << arr[i][0] << "\t\t\t" << arr[i][1] << "\t\t" << arr[i][2] << "\t     |" << endl;
    }


    cout << "|\t\t\t\t\t\t     |" << endl;
    cout << " ---\t\t\t\t\t\t  ---" << endl;*/

}
