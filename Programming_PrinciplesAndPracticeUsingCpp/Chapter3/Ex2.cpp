#include "std_lib_facilities.h"

int main()
{
    double miles      = 0;
    double kilometers = 0;
    constexpr int miles_to_kilometers = 1609;
    cout << "Enter the number of miles to be converted :\n";
    cin >> miles;
    if (!cin) {cout << "Wrong data type for miles\n"; return 0;}
    
    // Executing conversion from miles to kilometers
    kilometers = miles * miles_to_kilometers;
    cout << miles << " miles = " << kilometers << " kilometers\n" ;
    return 0;
}
