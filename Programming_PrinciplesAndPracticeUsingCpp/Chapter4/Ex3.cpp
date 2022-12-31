#include "std_lib_facilities.h"

int main()
{
    // Read a sequence o double values into a vector.
    // Each value represent a distance between two cities along a route.
    
    vector<double> D;
    cout << "Insert the distance. To stop print any value that's not a double (e.g. !,$...).\n"; 
    for (double distance; cin >> distance;)
    {
        if (distance > 0)  D.push_back(distance);
    }
    // Check if user prompt at least two distance
    if (D.size() < 2)
    {
         cout << "You need to enter at least two distance! Stopping the program...";
         return 0;
    }
    // Compute total distance and mean distance
    double Total_distance   = 0;
    double Mean_distance    = 0;
    double Sum              = 0;
    for (double x : D)
    {
         Total_distance += x;
         Sum            += x;
    }
    Mean_distance = Sum/D.size();
    // Compute the minimum distance
    double Min_distance = D[0];
    for (int i=1 ; i < D.size() ; ++i)
    {
        if (D[i] < D[i-1]) Min_distance = D[i];
    } 
    
    // Print
    cout << "Total distance : " << Total_distance << endl;
    cout << "Mean distance : " << Mean_distance << endl;
    cout << "Min_distance : " << Min_distance << endl;
} 
