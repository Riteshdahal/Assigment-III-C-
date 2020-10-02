#include <iostream>
using namespace std;
class Shape
{

public:
    int side1;
    int area;
    Shape()
    {
        side1 = 0;
    }
    Shape(int breadth)
    {
        side1 = breadth;
    }

    virtual int findArea() = 0;
};

class rectangle : public Shape
{
public:
    int side2;
    rectangle()
    {
        side1 = 0;
    }
    rectangle(int breadth) : Shape(breadth)
    {
        side1 = breadth;
    }

    void getData()
    {
        cout << "Enter the length of Rectangle " << endl;
        cin >> side2;
    }
    int findArea()
    {
        area = side1 * side2;
        cout << "Area of Rectangle " << area << endl;
        return area;
    }
};
class circle : public Shape
{
public:
    circle()
    {
        side1 = 0;
    };
    circle(int diameter) : Shape(diameter)
    {
        side1 = diameter;
    }

    int findArea()
    {
        side1 = side1 / 2;

        area = (side1 * side1) * 11 / 7;
        cout << "Area of Half Circle " << area << endl;
        return area;
    }
};

int main()
{
    int breadth;
    cout << "Enter the side 1 of Rectangle and for diameter of circle" << endl;
    cin >> breadth;
    rectangle r1(breadth);
    circle c1(breadth);
    r1.getData();
    int finalArea;
    finalArea = r1.findArea() + c1.findArea();
    cout << "Area of BasketBall Court is  " << finalArea << endl;
}
