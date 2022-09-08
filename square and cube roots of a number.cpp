#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the Square root and Cube root of a given number ===== \n\n";

    int n;
    double sq = 1, cb = 1;
    cout << " \n\nEnter the number you want to find the Square root and Cube root of : ";
    cin >> n;
    sq = sqrt(n);
    cb = cbrt(n);

    cout << " \n\nThe Square Root of the number " << n << " is : " << sq;
    cout << " \n\nThe Cube Root of the number " << n << " is : " << cb;
    cout << "\n\n\n";

    return 0;
}
