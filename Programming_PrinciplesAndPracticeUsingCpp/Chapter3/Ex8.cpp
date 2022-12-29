#include "std_lib_facilities.h"

int main()
{
    int val = 0;
    cout << "Enter an integer value:\n";
    cin >> val;
    if (!cin)
    {
         cout << "Not an integer value. Stopping the progam...\n";
          return 0;
    }
    if (val % 2 == 0) cout << "The value " << val << " is even\n";
    else              cout << "The value " << val << " is odd\n";
    return 0;
}
