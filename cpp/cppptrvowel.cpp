#include <iostream>
using namespace std;

int main() {
   char st[20], *pt;
   int i = 0, x = 0;
   cout << "Enter Any string : ";
   cin>>st;
   pt = st;
   while (*pt != '\0') {
      if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
         x++;
      i++;
      pt++;
   }

   cout << "\nLength of String : " << i;
   cout << "\nVowels Count In the String : " << x;
   cout << "\nConstant Count in the String : " << (i - x);

   return 0;
}
