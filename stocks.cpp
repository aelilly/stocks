// stocks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

double calculateProfit(int, double, int, double, int);
int getInt(string);
double getDouble(string);

int main()
{
	double sPrice, pPrice;
	double profit;
	int shares, sComm, pComm;

	shares = getInt("Input number of shares purchased: ");
	pPrice = getDouble("Input purchase price: ");
	pComm = getInt("Input purchase commission: ");
	sPrice = getDouble("Input sale price: ");
	sComm = getInt("Input sale commission: ");

	profit = calculateProfit(shares, sPrice, sComm, pPrice, pComm);
	cout << "The profit on the stock was $" << setprecision(2) << fixed << profit;

}

double calculateProfit(int shares, double sPrice, int sComm, double pPrice, int pComm) {
	double profit = ((shares * sPrice) - sComm) - ((shares * pPrice) + pComm);
	return profit;
}
int getInt(string prompt) {
	int variable;
	do {
		cout << prompt;
		cin >> variable;
		if (variable < 0)
			cout << "Input must be positive, try again" << endl;
	} while (variable < 0);
	return variable;
}
double getDouble(string prompt) {
	double variable;
	do {
		cout << prompt;
		cin >> variable;
		if (variable < 0)
			cout << "Input must be positive, try again" << endl;
	} while (variable < 0);
	return variable;
}

/*
Input number of shares purchased: -7
Input must be positive, try again
Input number of shares purchased: 10
Input purchase price: 100
Input purchase commission: 10
Input sale price: 200
Input sale commission: 10
The profit on the stock was $980.00
*/