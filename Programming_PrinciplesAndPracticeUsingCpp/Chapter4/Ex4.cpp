#include "std_lib_facilities.h"

int main()
{
    srand(time(NULL));    
    int N = rand()%100 + 1;
    
    cout << "Pensa ad un numero intero compreso tra 1 e 100.\n";
    cout << "Done? [y/n]\n";
    bool ok_start = false;
    string start;
    while (!ok_start)
    {
        cin >> start;
        if (start == "y")
        {
            ok_start = true;
            cout << "Before starting the game please note the following : \n";
            cout << "- Be honest.\n";
            cout << "- You can just type [y/n]. If you prompt any other value it will be considered as 'n'.";
            cout << "Ok let's start the game!\n";
        }
        else
        {
            cout << "Take your time. Nobody is waiting for you uh?\n";
        }
    }
        
    bool exit = false;
    int ctn = 0;
    int max = 100;
    int min = 0;
    string correct = "";
    while (!exit)
    {   
        cout << "-------------" << endl;
        cout << "Attempt number " << ctn << endl;
        cout << "Is the number equal to " << N << " ? [y/n]\n";
        cin >> correct;
        if (correct == "y")
        {
            cout << "F%!? you. I win.\n";
            exit = true;
        }
        else if (ctn == 7)
        {
            cout << "Max number of attempts reached. Goodbye.";
            exit = true; 
        }
        else
        {
            cout << "Dammit\n";
            cout << "Is the number greater than " << N << " ? [y/n]" << endl;
            cin >> correct;
            if (correct == "y")
            {
                min = N;
                N = (min + max)/2;
            } 
            else
            {
                max = N;
                N = (min + max)/2;
            }
            exit = false;            
        }
        ctn++;
    }
    return 0;
}

