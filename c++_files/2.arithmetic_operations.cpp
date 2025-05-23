#include<iostream>
#include<cmath>
 using namespace std;

 int main()
 { 
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Perform basic arithmetic operations

    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulo: " << (a % b) << endl;

    //type casting 

    cout<<"type casted division:"<<(double)a/b<<endl;

return 0;
 }