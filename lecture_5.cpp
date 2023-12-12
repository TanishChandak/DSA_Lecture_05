#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    // Operators:
    cout << "The AND operator of a & b: " << (a & b) << endl;
    cout << "The OR operator of a | b: " << (a | b) << endl;
    cout << "The NOT operator of ~a: " << (~a) << endl;
    cout << "The XOR operator of a ^ b: " << (a ^ b) << endl;

    // Right and Left shifts:
    cout << "Right shift: " << (17 >> 1) << endl;
    cout << "Right shift: " << (18 >> 2) << endl;
    cout << "Left shift: " << (19 << 1) << endl;
    cout << "Left shift: " << (21 << 2) << endl;

    // Post and Pre increment/decrement:
    int x = 10;
    cout << "Post increment: " << (x++) << endl; //here value is used then it will be calculated
    cout << "Pre increment: " << (++x) << endl; // here the above value is incremented and used below
    cout << "Post decrement: " << (x--) << endl; //here it will used and it will decrement
    cout << "Pre decrement: " << (--x) << endl; // here first decrement then it will give us

    // For Loop:
    int num1;
    cout<<"Enter the value of num1: ";
    cin>>num1;

    for (int i = 1; i <= num1; i++)
    {
        cout<< i <<endl;
    }

    //Printing the sum of n number using for loop:
    int num2;
    cout << "Enter the value of num2: ";
    cin >> num2;

    int sum = 0;
    for (int i = 1; i <= num2; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of n number is: " << sum << endl;

    // Fibonacci series:
    int num3;
    cout << "Enter the value of num3: ";
    cin >> num3;

    int a = 0;
    int b = 1;
    cout << "The Fibonacci Series is: ";
    cout << a << " " << b << " ";
    for (int i = 1; i <= num3; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }

    // Prime number:
    int num4;
    cout << "Enter the value of num4: ";
    cin >> num4;

    bool isPrime = 1;
    for (int i = 2; i < num4; i++)
    {
        if (num4 % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "It is not a prime number." << endl;
    }
    else
    {
        cout << "It is prime number." << endl;
    }
}