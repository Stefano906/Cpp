#include "std_lib_facilities.h"

int main()
{
    vector<double> Temp;
    
    for (double temp ; std::cin >> temp;) // More informations about the for loop statement are provided here : https://en.cppreference.com/w/cpp/language/for
    {
        Temp.push_back(temp);
    }
    
    // Average
    double Sum = 0;
    for (double x : Temp) Sum += x;
    cout << "Average temperature is : " << Sum/Temp.size() << endl;

    // Median
    // More information about median can be found here : https://en.wikipedia.org/wiki/Median
    // In this case we are working with finite data set. So we just have to deal with just two causistry.
    // Given n the number of data stored in the vector :
    // - Odd number of data set  
    // - Even number of data set 

    sort(Temp);                                                                                              // Sorting the vector
    
    if (Temp.size() % 2 == 0)                                                                                // if even
    {
        cout << "Median Temperature is : " << (Temp[Temp.size()/2 - 1] + Temp[Temp.size()/2]) / 2 << endl;   // Maybe use a variabile to increase readability
    }
    else                                                                                                     // if odd         
    {
        cout << "Median Temperature is : " << Temp[Temp.size() / 2] << endl;
    }
    
    return 0;
}
