#include<iostream>
using namespace std;
int main()
{
	char choice;
	do{
		int n, x, result = 0;
		char op;
		cout << "\nEnter First Number: ";
		cin >> n;
		cout << "Enter Operator: ";
		cin >> op;
		cout << "Enter Second Number: ";
		cin >> x;
		switch (op)
		{
		case('+'):
			result = n + x;
			cout << "\nAnswer: " << result;
			break;
		case('-'):
			result = n - x;
			cout << "\nAnswer: " << result;
			break;
		case('*'):
			result = n * x;
			cout << "\nAnswer: " << result;
			break;
		case('/'):
			result = n / x;
			cout << "\nAnswer: " << result;
			break;
		}
		cout << "\nDo Another? (y/n): ";
		cin >> choice;
	} while (choice == 'y');
	return 0;
}