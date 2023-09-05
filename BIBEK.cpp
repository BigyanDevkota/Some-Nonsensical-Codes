#include <iostream>
#include <conio.h>
using namespace std;
class calculator
{
private:
    float a, b, w;
    char ch;

public:
    void setData()
    {
        cout << "enter 1st number :" << endl;
        cin >> a;
        cout << "enter 2nd number :" << endl;
        cin >> b;
        cout << "Which operation do you want to perform ?" << endl;
        cout << "Press + for add" << endl
             << "Press - for subtract" << endl
             << "Press * for multiplication" << endl
             << "Press / for division" << endl
             << endl;
        cout << "Your Operator is " << ch;
        cin >> ch;
    }
    void add()
    {
        w = a + b;
        cout << a << " " << ch << " " << b << " "
             << "="
             << " " << w;
    }
    void sub()
    {
        w = a - b;
        cout << a << " " << ch << " " << b << " "
             << "="
             << " " << w;
    }
    void mul()
    {
        w = a * b;
        cout << a << " " << ch << " " << b << " "
             << "="
             << " " << w;
    }
    void div()
    {
        w = a / b;
        cout << a << " " << ch << " " << b << " "
             << "="
             << " " << w;
    }
    void printData()
    {
        cout << "first number = " << a << endl;
        cout << "second number =" << b << endl;
    }
    void cal()
    {
        switch (ch)
        {
        case '+':
            add();
            break;

        case '-':
            sub();
            break;

        case '*':
            mul();
            break;

        case '/':
            div();
            break;

        default:
            cout << "Invalid Operation" << endl;
            break;
        }
    }
};

int main()
{
    calculator obj1;
    obj1.setData();
    obj1.printData();
    obj1.cal();
    getch();
}
void add()
{
    w = a + b;
    cout << a << " " << ch << " " << b << " "
         << "="
         << " " << w;
}
void sub()
{
    w = a - b;
    cout << a << " " << ch << " " << b << " "
         << "="
         << " " << w;
}
void mul()
{
    w = a * b;
    cout << a << " " << ch << " " << b << " "
         << "="
         << " " << w;
}
void div()
{
    w = a / b;
    cout << a << " " << ch << " " << b << " "
         << "="
         << " " << w;
}
void printData()
{
