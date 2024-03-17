#include<iostream>
using namespace std;
int main() {
	cout << "Enter number to reverse." << endl;
	int number;
	cin >> number;
	cout << "The reversed number is : ";
	while (number != 0)
	{
		cout << number%10;
		number = number / 10;
	}
	cout << endl;
	system("pause");
	return 0;
}