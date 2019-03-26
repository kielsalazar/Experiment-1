#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double box;
	double sideline;
	double premium;
	double generaladmission;
	double ticket1;
	double ticket2;
	double ticket3;
	double ticket4;
	double total;
	double tsold;
	
	cout << fixed << showpoint << setprecision(2);
	cout<<"Enter Number of tickets for BOX" <<endl;
	cin>> ticket1;
	cout<<"Enter Number of tickets for SIDELINE" <<endl;
	cin>> ticket2;
	cout<<"Enter Number of tickets for PREMIUM" <<endl;
	cin>> ticket3;
	cout<<"Enter Number of tickets for GENERAL ADMISSION" <<endl;
	cin>> ticket4;

	box=ticket1*250;
	sideline=ticket2*100;
	premium=ticket3*50;
	generaladmission=ticket4*25;
	total=box+sideline+premium+generaladmission;
	tsold=ticket1+ticket2+ticket3+ticket4;
	
	cout<<"Total sale for BOX:" <<box <<endl;
	cout<<"Total sale for for SIDELINE:" <<sideline <<endl;
	cout<<"Total sale for for PREMIUM:" <<premium <<endl;
	cout<<"Total sale for for GENERAL ADMISSION:" <<generaladmission <<endl;
	cout<<"Total number of TICKETS SOLD:" <<tsold <<endl;
	cout<<"Grand Total: "<<total<< "$" <<endl;
	
	getch;
	return 0;
}
