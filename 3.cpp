#include <iostream>
using namespace std;

class Beverage
{
public:
    int costofWater;
    int costofSugar;
    float totalcost;

    Beverage()
    {
        costofWater = 10;
        costofSugar = 10;
        totalcost = 0;
    }

    virtual void computeCost() = 0;
};

class Tea : public Beverage
{

    int costofTeaLeaves;

public:
    Tea()
    {
        costofTeaLeaves = 20;
    };

    void computeCost()
    {
        totalcost = costofWater + costofSugar + costofTeaLeaves;
    }

    void display()
    {
        cout << "Cost of Tea is " << totalcost << endl;
    };
};

class coffee : public Beverage
{

    int costofCoffeePowder;

public:
    coffee()
    {
        costofCoffeePowder = 40;
    };

    void computeCost()
    {
        totalcost = costofWater + costofSugar + costofCoffeePowder;
    }
    void display()
    {
        cout << "Cost of Coffee is " << totalcost << endl;
    };
};

int main()
{
    Tea t1;
    coffee c1;
    t1.computeCost();
    t1.display();
    c1.computeCost();
    c1.display();
}