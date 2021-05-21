// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


// Main Structure for Employee Data
struct Workers {
	// ID and Names
	string employeeid;
	string firstname;
	string middlename;
	string lastname;
	
	// Contact Details
	string streetaddress;
	string suburb;
	int postcode;
	string city;
	string contactnumber;
	string emailaddress;
	
	// Tax and Payment Information
	string irdnum;
	string taxcode;
	float hoursworked;
	float hourlyrate;
	float grosspay;
	float taxrate;
	float netpay;
	float taxdeduct;
};

// Pay Slip Function designed to display the payslips of inputted Employee data
void PaySlip(Workers arr[5], string weekstart, string weekend){
	// Header for the list
	cout << "PAY SLIP for this week starting on " << weekstart << " and ending on " << weekend << endl;
	cout << "\n******************************************************\n" << endl;

	// PaySlip loop
	for (int i = 0; i < 2; i++) {
		cout << "Employee ID: " << arr[i].employeeid << endl;
		cout << "Full Name: " << arr[i].firstname << " " << arr[i].middlename << " " << arr[i].lastname << endl;
		cout << "Address: " << arr[i].streetaddress << " " << arr[i].suburb << " " << arr[i].city << endl;
		cout << "Post Code: " << arr[i].postcode << endl;
		cout << "Contact Number: " << arr[i].contactnumber << endl;
		cout << "Email Address: " << arr[i].emailaddress << endl;
		cout << "IRD Number: " << arr[i].irdnum << endl;
		cout << "Tax Code: " << arr[i].taxcode << endl;
		cout << "Hours Worked: " << arr[i].hoursworked << endl;
		cout << "Hourly Rate: " << arr[i].hourlyrate << endl;
		cout << "Tax Rate: " << arr[i].taxrate << endl;
		cout << "Gross Pay: " << arr[i].grosspay << endl;
		cout << "Tax Deducted: " << arr[i].taxdeduct << endl;
		cout << "Net Pay: " << arr[i].netpay << endl;
		cout << "\n******************************************************\n" << endl;
	}

}

// Weekly Report Function that doubles as a calculation function and an output function. Calculates totals from all 5 employees and outputs the Weekly Statistics
void WeeklyReport(Workers arr[5], string weekstart, string weekend) {
	float totalgross, totaltaxdeduct, totalnetpay, temp; // Temp is to hold the current added value to use in the next loop
	int j = 1;

	// Total Gross Calc
	temp = arr[0].grosspay;
	for (j; j < 5; j++) {
		temp = temp + arr[j].grosspay;
		totalgross = temp;
		
	}

	// Total Tax Deduction Calc
	temp = arr[0].taxdeduct;
	for (j = 1; j < 2; j++) {
		temp = temp + arr[j].taxdeduct;
		totaltaxdeduct = temp;

	}
	

	// Total NetPay Deduction Calc
	temp = arr[0].netpay;
	for (j = 1; j < 2; j++) {
		temp = temp + arr[j].netpay;
		totalnetpay = temp;

	}
	
	// Output
	cout << "Weekly Statistics for this week starting on " << weekstart << " and ending on " << weekend << endl;
	cout << "\n******************************************************\n" << endl;
	cout << "Total Amount Paid in Gross Pay: " << totalgross << endl;
	cout << "Total Amount Deducted in Tax: " << totaltaxdeduct << endl;
	cout << "Total Amount Paid in Net Pay: " << totalnetpay << endl;
	cout << "\n******************************************************\n" << endl;


}

// Main Program
int main()
{
	struct Workers worker[5]; // Calling upon the Employee Data structure
	string weekstartdate; // For user input regarding the first day of the work week
	string weekenddate; // For user input regarding the last day of the work week
	float extrahours = 0; // For 41 to 49 Hours, concerning the hourly rate change.

	// User input for Work Week Timeframe
	cout << "Enter the Week Start Date: ";
	cin >> weekstartdate;
	cout << "Enter the Week End Date: ";
	cin >> weekenddate;
	cout << "\n******************************************************\n" << endl;

	// User Input loop to fill the array produced by the Employee Data structure
	for (int i = 0; i < 5; i++) {
		cout << "Enter the information for Employee #" << i + 1 << endl;
		cout << "\n******************************************************\n" << endl;
		
		cout << "Enter the Employee ID: ";
		cin >> worker[i].employeeid;
		
		cout << "Enter their First Name: ";
		cin >> worker[i].firstname;
		
		cout << "Enter their Middle Initials: ";
		cin >> worker[i].middlename;
		
		cout << "Enter their Last Name: ";
		cin >> worker[i].lastname;
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Prevents future standard cin inputs freaking out after getline usage
		
		cout << "Enter their Street Address: ";
		getline(cin, worker[i].streetaddress);
		
		cout << "Enter their Suburb: ";
		getline(cin, worker[i].suburb);
		
		cout << "Enter their Postcode: ";
		cin >> worker[i].postcode;
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Prevents future standard cin inputs freaking out after getline usage
		
		cout << "Enter their City: ";
		getline(cin, worker[i].city);
		
		cout << "Enter their Contact Number: ";
		cin >> worker[i].contactnumber;
		
		cout << "Enter their Email Address: ";
		cin >> worker[i].emailaddress;
		
		cout << "Enter their IRD Number: ";
		cin >> worker[i].irdnum;
		
		cout << "Enter their Tax Code: ";
		cin >> worker[i].taxcode;
		
		// Following three have conditional checks to determine if the user has inputted data within the clarified range.
		while (worker[i].hoursworked < 1 || worker[i].hoursworked > 49) {
			cout << "Enter their Hours Worked (between 1 and 49 hours): ";
			cin >> worker[i].hoursworked;
			if (worker[i].hoursworked < 1 || worker[i].hoursworked > 49) {
				cout << "ERROR: You've entered insufficient data, please try again." << endl;
			}
			else {

			}
		}
		
		while (worker[i].hourlyrate < 20 || worker[i].hourlyrate > 50) {
			cout << "Enter their Hourly Rate (between 20 and 50 dollars): ";
			cin >> worker[i].hourlyrate;
			if (worker[i].hourlyrate < 20 || worker[i].hourlyrate > 50) {
				cout << "ERROR: You've entered insufficient data, please try again." << endl;
			}
			else {

			}
		}
		
		while (worker[i].taxrate < 10.5 || worker[i].taxrate > 39) {
			cout << "Enter their Tax Rate (between 10.5% and 39%): ";
			cin >> worker[i].taxrate;
			if (worker[i].taxrate < 10.5 || worker[i].taxrate > 39) {
				cout << "ERROR: You've entered insufficient data, please try again." << endl;
			}
			else {

			}
		}
		
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Prevents future standard cin inputs freaking out after getline usage
		
		// Calculations to fill the remaining Employee Data fields of Gross Pay, Tax Deduction, and Net Pay.

		if (worker[i].hoursworked > 40) {
			extrahours = (worker[i].hourlyrate * (float)1.5) * (worker[i].hoursworked - (float)40);
			worker[i].grosspay = worker[i].hourlyrate * 40 + extrahours;
		}
		else {
			worker[i].grosspay = worker[i].hourlyrate * worker[i].hoursworked;
		}
		
		worker[i].taxdeduct = (worker[i].taxrate * 0.01f) * worker[i].grosspay;
		worker[i].netpay = worker[i].grosspay - worker[i].taxdeduct;
		
		cout << "\n******************************************************\n" << endl;

		

	}

	// Calling upon the PaySlip function
	PaySlip(worker, weekstartdate, weekenddate);

	// Calling upon the WeeklyReport function
	WeeklyReport(worker, weekstartdate, weekenddate);

	return 0;

}


