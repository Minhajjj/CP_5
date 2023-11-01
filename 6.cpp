#include<iostream>
using namespace std;
int main()
{
	int intg = 1;
	do
	{
		cout << intg << " ";
		intg += intg;
	} while (intg <= 512);
	return 0;
}