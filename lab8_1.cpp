#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double prevBalance,rate,interest,total,payment,balance;
	int year=1;
	cout << "Enter initial loan: ";
	cin >> prevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	balance=prevBalance;

	do{
		interest=rate/100*prevBalance;
		total=prevBalance+interest;
		payment = (prevBalance+interest>payment)? payment : prevBalance+interest;
		balance=total-payment;

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year;
		cout << setw(13) << left << prevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << balance;
		cout << "\n";
	
		prevBalance=balance=total-payment;
		year++;
	} while (balance>0);
	
	return 0;
}
