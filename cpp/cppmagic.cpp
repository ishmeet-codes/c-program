#include<iostream> 
using namespace std; 
  
bool Magic(int n) 
{ 
    int sum = 0; 
    while (n > 0 || sum > 9) 
    { 
        if (n == 0) 
        { 
            n = sum; 
            sum = 0; 
        } 
        sum += n % 10; 
        n /= 10; 
    }
     return (sum == 1); 
} 
   
 
int main() 
{ int n;
    cout<<"Enter number :- ";
    cin>>n;
    if (Magic(n)) 
        cout << "Magic Number"; 
    else
        cout << "Not a magic Number"; 
    return 0; 
} 
