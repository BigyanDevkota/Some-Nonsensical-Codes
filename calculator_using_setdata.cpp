#include <iostream>
#include <iomanip>

using namespace std;

class calculator
{
private:
    int x, y, z;
    float z1;

public:
    int add();
    int sub();
    int pro();
    float div();
    void setdata(int, int);
    void printdata(int, int);
};

void calculator::setdata(int a, int b)
{
    x = a;
    y = b;
}

void calculator::printdata(int a, int b)
{
    cout << "two numbers are:" << x << "&" << y << endl;
}

int calculator::add()
{
    z = x + y;
    return z;
}

int calculator::sub()
{
    z = x - y;
    return z;
}

int calculator::pro()
{
    z = x * y;
    return z;
}

float calculator::div()
{
    z1 = float(x) / float(y);
    return z1;
}

int main()
{
    int a, b;
    char ch;
    calculator c;
    cout << "enter 1st number:\n";
    cin >> a;
    cout << "enter 2nd number:\n";
    cin >> b;
    cout << "Which operation do you want to perform ?\n";
    cout << "Press + for add\nPress - for subtract\nPress * for multiplication\nPress / for division\n";
    cin >> ch;
    int result1;
    float result2;
    switch (ch)
    {
    case '+':
        c.setdata(a, b);
        c.printdata(a, b);
        result1 = c.add();
        cout << "Result: " << result1 << endl;
        break;

    case '-':
        c.setdata(a, b);
        c.printdata(a, b);
        result1 = c.sub();
        cout << "Result: " << result1 << endl;
        break;

    case '*':
        c.setdata(a, b);
        c.printdata(a, b);
        result1 = c.pro();
        cout << "Result: " << result1 << endl;
        break;

    case '/':
        c.setdata(a, b);
        c.printdata(a, b);
        result2 = c.div();
        cout << fixed << setprecision(2) << "Result: " << result2 << endl;
        break;

    default:
        cout << "Invalid Operation" << endl;
        break;
    }
    return 0;
}