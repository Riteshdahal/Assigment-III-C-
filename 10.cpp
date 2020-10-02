#include <iostream>
using namespace std;

class Appliance
{

public:
    int number;
    Appliance()
    {
        number = 0;
    }
    Appliance(int n)
    {
        number = n;
    }

    void on()
    {

        cout << "Appliance turned On " << endl;
    }

    void off()
    {
        cout << "Appliance turned Off " << endl;
    }
};

class Printer : public virtual Appliance
{
public:
    Printer()
    {
        number = 0;
    }
    Printer(int n) : Appliance(n)
    {
        number = n;
    }

    void print()
    {
        for (int i = 0; i < number; i++)
        {
            cout << "Printer is Printing " << endl;
        }
    }
};

class Scanner : public virtual Appliance
{
public:
    Scanner()
    {
        number = 0;
    }
    Scanner(int n) : Appliance(n)
    {
        number = n;
    }

    void scan()
    {
        for (int i = 0; i < number; i++)
        {
            cout << "Scanner is Scanning " << endl;
        }
    }
};

class comboDevice : public Printer, public Scanner
{
public:
    comboDevice()
    {
        number = 0;
    }

    comboDevice(int n) : Appliance(n)
    {
        number = n;
    }
};

int main()
{
    int n;
    cout << "How many times You want to print and scan " << endl;
    cin >> n;
    comboDevice c(n);
    c.on();
    c.print();
    c.scan();
    c.off();
}