// Supermarket items.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void OutTable(string arr[][7], int size) { // First Table without profit.
    int i, j;
    cout << "\n| Item_Code\tItem_Name\tItem_Cost_Price\t\tItem_Selling_Price\tStock\t\tRe_Order_Level  |" << endl;
    /*for (i = 0; i < size; i++) {
        cout << "| ";
        for (j = 0; j < 5; j++) {
            cout << arr[i][j] << "\t\t";
        }
        cout << arr[i][5] << " |" << endl;
    }*/

    for (i = 0; i < size; i++) {
        cout << "| " << arr[i][0] << "\t\t" << arr[i][1] << "\t\t" << arr[i][2] << "\t\t\t" << arr[i][3] << "\t\t\t" << arr[i][4] << "\t\t" << arr[i][5] << "\t\t|" << endl;
    }
}                       

void OutTable2(string arr[][7], int size) { // Second Table with profit.
    int i, j;
    cout << "\n| Item_Code\tItem_Name\tItem_Cost_Price\t\tItem_Selling_Price\tStock\t\tRe_Order_Level\tProfit  |" << endl;
    /*for (i = 0; i < size; i++) {
        cout << "| ";
        for (j = 0; j < 6; j++) {
            cout << arr[i][j] << "\t\t";
        }
        cout << arr[i][6] << " |" << endl;
    }*/
    for (i = 0; i < size; i++) {
        cout << "| " << arr[i][0] << "\t\t" << arr[i][1] << "\t\t" << arr[i][2] << "\t\t\t" << arr[i][3] << "\t\t\t" << arr[i][4] << "\t\t" << arr[i][5] << "\t\t" << arr[i][6] << "\t|" << endl;
    }
}

string ShopProfit(string arr[][7], int size){ //Profit calculator
    int i;
    float arrf[100][100];
    string profit;
    
    for (i = 0; i < size; i++) {
        arrf[i][3] = stof(arr[i][3]);
        arrf[i][2] = stof(arr[i][2]);
        profit = to_string(arrf[i][3] - arrf[i][2]);
        arr[i][6] = profit;
        
    }
    return profit;
}

int main() // Main
{
    string shop[100][7]; //Variables
    int i, n;

    // Prompt

    cout << "Shop List!!!!!!!!\n" << endl;
    cout << "How many items do you plan to enter: ";
    cin >> n;
    cout << "\n\n" << endl;

    // Loop for array input

    for (i = 0; i < n; i++) {
        cout << "Enter the item code: ";
        cin >> shop[i][0];
        cout << "Enter the item name: ";
        cin >> shop[i][1];
        cout << "Enter the item cost price: ";
        cin >> shop[i][2];
        cout << "Enter the item selling price: ";
        cin >> shop[i][3];
        cout << "Enter the item stock: ";
        cin >> shop[i][4];
        cout << "Enter the item re-order level: ";
        cin >> shop[i][5];
    }


    //Function calls for First Table & Profit Calculation
    OutTable(shop, n);

    shop[n][7] = ShopProfit(shop, n);


    //Second Table Function Call
    cout << "\n\nNew Table\n\n";

    OutTable2(shop, n);

    return 0;
}
