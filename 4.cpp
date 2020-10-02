#include <iostream>
using namespace std;

class Pizza
{

public:
     

    int pricechesse = 200;
    int pricepepperoni = 400;
    int priceclam = 500;

    void orderPizza()
    {

        int decision;
        cout << "Welcome to dominos Pizza. "
             << "Enter your Choice " << endl;
        cout << "1. Cheese Pizza " << endl;
        cout << "2. Pepperoni Pizza " << endl;
        cout << "3. Clam Pizza " << endl;
        cin >> decision;
        if (decision == 1)
        {
            cout << "You have ordered Cheese Pizza "
                 << "Price: " << pricechesse << endl;
        }
        else if (decision == 2)
        {
            cout << "You have ordered Peppoeoni Pizza "
                 << "Price: " << pricepepperoni << endl;
        }
        else if (decision == 3)
        {
            cout << "You have ordered Clam Pizza "
                 << "Price: " << priceclam << endl;
        }
        else
        {
            cout << "We have only three options kindly choose between 1 to 3 " << endl;
        }
    }
};

class cheesePizza : public Pizza
{
};

class pepperoniPizza : public Pizza
{
};

class clamPizza : public Pizza
{
};
int main()
{
    Pizza p;
    p.orderPizza();
}