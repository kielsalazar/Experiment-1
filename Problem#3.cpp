#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{	
	double netbalance;
	double payment;
	double d1;
	double d2;
	double monthlyinterest;
	double interest;
	double averagedailybalance;
	
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout<<"Input the Following: \n";
	cout<<"Net Balance: ";
	cin>>netbalance; 
	cout<<"Payment: ";
	cin>>payment;
	cout<<"Number of Days in the Billing Cycle: ";
	cin>>d1;
	cout<<"Number of Days payment is made before Billing Cycle: ";
	cin>>d2;
	cout<<"Interest Rate per Month: ";
	cin>>monthlyinterest;
	
	averagedailybalance = (netbalance * d1 - payment * d2) / d1;
	interest = (averagedailybalance * monthlyinterest);
	
	cout << "The Interest is: " << interest <<endl;

	getch();
	return 0;
}

