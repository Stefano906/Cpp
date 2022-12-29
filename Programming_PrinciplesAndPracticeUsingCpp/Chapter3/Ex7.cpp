#include "std_lib_facilities.h"
#include <unistd.h>

int main()
{
    // Since <string.h> is available in "std_lib_facilites.h" it's reasonable to think that we
    // can use the data type string. 
    // Since we don't know at compile time the length of the string prompted by the user 
    // defining the string as an array of char is not recommended
    
    string s[3] = {""};          // Initialize an array of string
    cout << "Please enter 3 string :\n";
    cin >> s[0] >> s[1] >> s[2];
    if (!cin) cout << "The inserted string is not valid!\n";
    cout << "Before rearranging :\n";
    cout << "->" << s[0] << ", " << s[1] << ", " << s[2] << "\n";
    string tmp = {""};
    bool swap  = true;
    do
    {
        swap = true;
        for (int i=0; i<3; i++)
        {
            if (s[i].size() < s[i-1].size())
            {
                tmp    = s[i];
                s[i]   = s[i-1];
                s[i-1] = tmp;
                swap   = false;
                cout << "Here" << "\n";
            }
        }
    } while(!swap); // Same as while(swap == true)
    cout << "After rearranging :\n";
    cout << "->" << s[0] << ", " << s[1] << ", " << s[2] << "\n";
    return 0;
}
