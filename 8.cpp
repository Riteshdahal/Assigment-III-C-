#include <iostream>
using namespace std;

template <class T1, class T2>
int Max(T1 x, T2 y)
{

    return (x > y) ? x : y;
}

int main()
{
    cout << "The Maximum in integer are " << Max<int>(6, 9) << endl;
    cout << "The Maximum in Character is " << Max<char>('a', 'b') << endl;
}
