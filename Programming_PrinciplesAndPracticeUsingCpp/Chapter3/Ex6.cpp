#include "std_lib_facilities.h"

int main()
{
    int a[3] {0};
    cout << "Inserire tre numeri interi: \n";
    cin >> a[0] >> a[1] >> a[2];
    if(!cin) cout << "Uno dei valori non è un intero! \n"; // Check one of the input is not an integer
    int tmp = 0;
    bool swap = true;
    do
    {
        swap = true;
        for (int i=1 ; i<3 ; i++)
        {
            if (a[i] < a[i-1])
            {
                tmp = a[i];
                a[i] = a[i-1];
                a[i-1] = tmp;
                swap = false;
            }
        }
    }  while(!swap);
    cout << a[0] << ", " << a[1] << ", " << a[2] << "\n";
    return 0;
}
