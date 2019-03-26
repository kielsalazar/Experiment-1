#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double mass;
	double density;
	double volume;
	
	cout << fixed << showpoint << setprecision(2);
	cout<<"Enter Mass in grams: ";
	cin>> mass;
	cout<<"Enter Density in grams per cubic centimeter: ";
	cin>> density;

	volume=mass/density;
	cout<<"Volume is " <<volume<<endl;

	getch;
	return 0;
}
