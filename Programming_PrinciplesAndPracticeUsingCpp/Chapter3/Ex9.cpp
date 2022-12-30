#include "std_lib_facilities.h"

int main()
{
    // This problem could be easily solved with data type enumerator 
    // Unfortunately enum are not presented till Chapter 9 so we must find another solution
    
    string _enum[5] = {""};
    _enum[0] = "zero";
    _enum[1] = "one";
    _enum[2] = "two";
    _enum[3] = "three";
    _enum[4] = "four";    
    // Even if is not required by the exercise let's do a while loop to continuously
    // prompt the user to insert a number
    string string_input = {""};
    string y_n = {""};
    bool again = true;
    cout << "Type one of the following choice :\n" << "- zero \n" << "- one\n" << "- two\n" << "- three\n" << "- four \n";
    while(again)
    {   
        int ctn = 0;
        cout << "Type : ";
        cin >> string_input;
        bool find   = false;
        while(!find)
        {   
            find    = false;
            if (string_input == _enum[ctn])
            {
                cout << "Il valore corrisponde a : "  << ctn << endl;
                find = true;
            }
            ctn++;
            if (ctn == 5)
            {
                cout << "Not a number I know!\n";
                find = true;              
            }
        }
        cout << "Do you want to continue? [yes,no] : ";
        cin >> y_n;
        if (!cin)
        {
             cout << "Not a valid choice. Stopping the program...\n";
             again = false;
        }
        if (y_n == "yes") again = true;
        else            again = false;
    }
    return 0;
}
