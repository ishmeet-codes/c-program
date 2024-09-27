#include<iostream>
using namespace std;
void revOfString(const string& a);
int main(){
	    string str; 
	    cout << " Enter a string: ";
    getline(cin, str);
    
    revOfString(str);

    return 0; 
}
void revOfString(const string& str)
{
    size_t lengthOfString = str.size(); 
     if (lengthOfString == 1)
       cout << str << endl;
    else
    {cout << str[lengthOfString - 1];
    revOfString(str.substr(0, lengthOfString - 1));
    }
}
