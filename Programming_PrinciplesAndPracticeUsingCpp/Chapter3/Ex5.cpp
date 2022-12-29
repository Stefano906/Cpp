#include "std_lib_facilities.h"

int main()
{
    double val1,val2 {0};                                                // Initialize both integer variabile to 0
    cout << "Enter the first integer and then the second integer\n"; 
    cin >> val1 >> val2;
    if (val1 > val2)
    {
        cout << "The greatest is : " << val1 << endl;
        cout << "The smallest is : " << val2 << endl; 
    }
    else if (val1 < val2)
    {
        cout << "The greatest is : " << val2 << endl;
        cout << "The smallest is : " << val1 << endl;
    }
    else
    {
        cout << "You enter two equal numbers" << endl;
    }

    cout << "The sum is : " << val1 + val2 << endl;
    cout << "The product is : " << val1*val2 << endl;
    cout << "The difference is : " << val1 - val2 << endl;
    if (val2 != 0)
    { 
         cout << "The ratio is : " << val1 / val2 << endl;  // Look at the difference with Ex4.cpp
                
    }
    else cout << "Warning! This operation is not allowed. You cannot divide a number by 0." << endl; 
    return 0; 
}
