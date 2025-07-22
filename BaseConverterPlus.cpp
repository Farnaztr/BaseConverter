#include <iostream>
#include <bitset>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
	string user_input; int numeric_value;
	cout << "Enter a character or a number: "; cin >> user_input;
	if (user_input.length() == 1 && !isdigit(user_input[0]))
	{
		numeric_value = int(user_input[0]);
	}

	else
	{
		numeric_value = stoi(user_input);
	}
	cout << "Decimal: " << numeric_value << endl;
	cout << "Hexadecimal: " << hex << uppercase << numeric_value << endl;
	string binary = bitset<16>(numeric_value).to_string();
	binary.erase(0, binary.find_first_not_of('0'));
	if (binary.empty()) binary = "0";
	cout << "Binary: "<<binary<< endl;

	_getch();
}
