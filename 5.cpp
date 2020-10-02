#include <iostream>
using namespace std;

int main()
{
    int factorial = 1;
    cout << "Welcome to the factorial Calculation Program   " << endl;
    int number;

    cout << "Enter the Number you Want to do Factorial " << endl;
    cin >> number;

    try
    {

        if (number < 0)
            throw number;
        else
        {
            for (int i = 1; i < number + 1; i++)
            {
                factorial = factorial * i;
            }
            cout << "Factorial of the " << number << " is " << factorial << endl;
        }
    }
    catch (int number)
    {
        cout << "Exception Caught " << endl;
    }
}
