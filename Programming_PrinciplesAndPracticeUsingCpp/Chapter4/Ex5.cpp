#include "std_lib_facilities.h"

int main()
{
    char op[1] = {""};
    double a,b = {0};
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter operand [+,-,*,/] : ";
    cin >> op;
    cout << "Enter b : ";
    cin >> b;

    switch (op[0]) { 
        case '+':
                cout << "The sum of " << a << " and " << b << " is " << a+b << endl;
                break;
        case '-':
                cout << "The difference between " << a << " and " << b << " is " << a-b << endl;
                break;    
        case '*':
                cout << "The product of " << a << " and " << b << " is " << a*b << endl;
                break;
        case '/':
                cout << "The ratio of " << a << " and " << b << " is " << a/b << endl;
                break;
    }
    return 0;
}
