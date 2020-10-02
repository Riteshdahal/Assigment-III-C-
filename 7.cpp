#include <iostream>
using namespace std;

class User
{
public:
    string names;
    string passwords;

    User()
    {
        names = "";
        passwords = "";
    }

    virtual void authenticate() = 0;
};

class admin : public User
{
    int phone;

public:
    admin()
    {
        names = "";
        passwords = "";
    }
    admin(string username, string password)
    {
        names = username;
        passwords = password;
    }
    void phonenumber()
    {
        cout << "Enter the phone number of Admistration" << endl;
        cin >> phone;
        cout << "Phone Number of Admistration " << phone << endl;
    }

    void authenticate()
    {
        string name;
        string password;
        cout << "Enter the Username"
             << "/n"
             << "and Password " << endl;
        cin >> name;
        cin >> password;

        if (names == name && passwords == password)
        {
            cout << "Welcome to admin Pannel" << endl;
        }
        else
        {
            cout << "You entered wrong username or password aren't you a admin user " << endl;
        }
    }
};

class normal : public User
{
public:
    normal()
    {
        names = "";
        passwords = "";
    }
    void authenticate()

    {

        cout << "Enter the Username"
             << "/n"
             << "and Password " << endl;
        cin >> names;
        cin >> passwords;

        cout << "Welcome to Normal User Pannel" << endl;
    }
};

int main()
{
    cout << "Welcome to you " << endl;
    cout << "1. Admin "
         << "\n"
         << "2. Normal" << endl;
    int n;
    cin >> n;
    if (n == 1)
    {
        User *p = new admin("123", "123");
        p->authenticate();
    }

    else if (n == 2)
    {
        User *p = new normal();
        p->authenticate();
    }
    else
    {
        cout << "We have only two user at a time" << endl;
    }
}
