#include "std_lib_facilities.h"

int main()
{
    vector<string> _enum   = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string again           = "y";
    string to_be_converted = "";
   
    while(again == "y")
    {
        cout << "Enter the string or the number to be converted : \n";
        cin >> to_be_converted;
        if (to_be_converted.size() > 1)
        {
            for (int pos=0; pos < _enum.size(); ++pos)
            {
                if (_enum[pos] == to_be_converted) cout << to_be_converted << " = " << pos << endl;
                else if (pos == _enum.size()-1)  cout << "I don't know how to convert what you prompt.\n";
                else ;
            }    
        }
        else
        {
            if (to_be_converted > "0" || to_be_converted < "9")
            {
                 cout << to_be_converted << " = " << _enum[stod(to_be_converted)] << endl;
            }
        }
        cout << "Do you want to try again? [y/n] : \n";
        cin >> again;
    }
    return 0;
}
