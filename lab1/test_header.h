#include <iostream>
#include <cmath>

using namespace std;

class Basic 
{
	int num1;
	int num2;
	int num3;

	public:
		void set_value(int,int,int);
		void add_number();
		void sub_number();
		void div_number();
		void mul_number();
};

void Basic::set_value(int a, int b, int c) 
{
	num1 = a;
	num2 = b;
	num3 = c;
}

void Basic::add_number() 
{
	cout << "Adding the 3 inputs together: \n";
	int sum = num1 + num2 + num3;
	cout << sum << "\n";
}

void Basic::sub_number() 
{
	cout << "Adding first 2 numbers and subtracting by the last: \n";
	int min = ((num1 + num2) - num3);
	if ( min < 0)
	{
		cout << "Result is less then zero...\n";
	} else {
		cout << min << "\n";
	}
}

void Basic::div_number() 
{
	cout << "Adding first 2 numbers and dividing by the last: \n";
	int sum = ((num1 + num2) / num3);
	if ( sum < 0)	
	{
		cout << "Result is a fraction...\n";
	} else {
		cout << sum << "\n";
	}
}

void Basic::mul_number() 
{
	cout << "Multiplying them together: \n";
	int min = num1 * num2 * num3;
	cout << min << "\n";
}
