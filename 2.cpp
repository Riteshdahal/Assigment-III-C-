#include <iostream>
#include <string.h>
using namespace std;

class String
{

public:
    char str[50];

    String()
    {
        strcpy(str, " ");
    };

    String(char str1[])
    {
        strcpy(str, str1);
    };

    void getStr()
    {
        cout << "Enter String" << endl;
        cin.getline(str, 50);
    }

    String operator+(String &obj)
    {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, obj.str);
        return temp;
    };

    String operator==(String &obj)
    {

        if (strcmp(str, obj.str) == 0)
        {
            cout << "String are same";
        }
        else
        {
            cout << "String are different";
        }
    };

    void display()
    {
        cout << str << endl;
    }
};
int main()
{
    String s1;
    String s2;
    s1.getStr();
    s2.getStr();
    s1.display();
    s2.display();
    String s3;
    s3 = s1 + s2;
    s3.display();
    s1 == s2;
    return 0;
}