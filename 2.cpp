#include<iostream>
using namespace std;
int main()
{
	int f = 1, n, i = 1;
	cout << "Enter a Positive Integer: ";
	cin >> n;
	do
	{
		f *= i;
		i++;
	} while (i <= n);
	cout << "\nFactorial of Number is: " << f;
}