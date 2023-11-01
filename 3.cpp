#include <iostream>
using namespace std;
int main() {
    int number, oct = 0, i = 1;
    cout << "Enter decimal number: ";
    cin >> number;
    do 
    {
        oct += (number % 8) * i;
        number /= 8;
        i *= 10;
    } while (number > 0);
    cout << "\nOctal number: " << oct << endl;
    return 0;
} 