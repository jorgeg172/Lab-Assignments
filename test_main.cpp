#include "test_header.h"

using namespace std;

int main() 
{
	Basic simple1;

	int x =0;
	int y =0;
	int z =0;

	cout << "Enter 3 numbers to do basic arigmatic with: \n";
	cout << "Enter first number: \n";
	cin >> x;
	cout << "Enter second number: \n";
	cin >> y;
	cout << "Enter third number: \n";
	cin >> z;


	cout << "First digit is: " << x <<"\n";
	cout << "     Second digit is: " << y <<"\n";
	cout << "          Third digit is: " << z <<"\n\n";

	simple1.set_value ( x , y, z);
	simple1.add_number();
	simple1.sub_number();
	simple1.mul_number();
	simple1.div_number();

	cout << "All done! Goodbye!\n";
}
