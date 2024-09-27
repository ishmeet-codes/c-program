// non prime number in given range
#include <iostream>
#include <cmath>    

using namespace std; 

int main() 
{
    int ult; 
    cout << " Input the upperlimit: "; 
    cin >> ult; 

    cout << " The non-prime numbers are: " << endl; 
    for (int y = 2; y <= ult; ++y) 
    {
        int mfactor = (int)sqrt(y); 
		for (int fact = 2; fact <= mfactor; ++fact) 
        {
             if (y % fact == 0) 
            {
                cout << y << " "; 
                break; 
            }
        }
    }
    cout << endl;
    return 0;
}
