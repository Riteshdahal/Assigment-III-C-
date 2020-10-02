#include <iostream>
using namespace std;
class cheesePizza;

class Pizza
{

public:
    int price;

    void orderPizza()
    {
        cout << "Welcome to dominos Pizza. ";
        cout << "Enter your Choice " << endl;
        cout << "1. Cheese Pizza " << endl;
        cout << "2. Pepperoni Pizza " << endl;
        cout << "3. Clam Pizza " << endl;
    }
};
class cheesePizza : public Pizza
{
public:
    int pricechesse;
    cheesePizza()
    {
    }
    cheesePizza(int a)
    {
        pricechesse = a;
    }

    void orderPizzacheese()
    {
        cout << "You have ordered Cheese pizza.  "
             << "The Price Rs " << pricechesse << endl;
    }
};

class pepperoniPizza : public Pizza
{

public:
    int pricepepperoni;
    pepperoniPizza() {}
    pepperoniPizza(int a)
    {
        pricepepperoni = a;
    }

    void orderPizzapepperoni()
    {
        cout << "You have ordered Pepperoni pizza.  "
             << "The Price Rs " << pricepepperoni << endl;
    };
};

class clamPizza : public Pizza
{

public:
    int priceclam;
    clamPizza() {}
    clamPizza(int a)
    {
        priceclam = a;
    }

    void orderPizzaclam()
    {
        cout << "You have ordered Clam pizza.  "
             << "The Price Rs " << priceclam << endl;
    }
};
int main()
{
    Pizza p;
    p.orderPizza();
    int n;
    cout << "Enter your Choice " << endl;
    cin >> n;

    if (n == 1)
    {
        Pizza *p1 = new cheesePizza(200);
        static_cast<cheesePizza *>(p1)->orderPizzacheese();
    }
    else if (n == 2)
    {
        Pizza *p1 = new pepperoniPizza(400);
        static_cast<pepperoniPizza *>(p1)->orderPizzapepperoni();
    }
    else if (n == 3)
    {
        Pizza *p1 = new clamPizza(600);
        static_cast<clamPizza *>(p1)->orderPizzaclam();
    }

    else
    {
        cout << "We have only three type of Pizza so please enter the number from 1 to 3." << endl;
    }
}