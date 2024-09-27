#include<iostream>
#include<fstream>
using namespace std;
int main(){

	fstream FileName;
    FileName.open("nnnnnn.txt", ios::out);
    if (!FileName) {
        cout<<" Error while creating the file ";
    }
    else {
        cout<<"File created and data got written to file";
        FileName<<"Till now, we learned how to create the file using C++. Now, we will learn how to write data to file which we created before. We will use fstream or ofstream object to write data into the file and to do so; we will use stream insertion operator (<<) along with the text enclosed within the double-quotes.";
        FileName.close();
    }

ifstream inFile("nnnnnn.txt");
string words;
while(inFile >> words) {
   cout << words <<" ";
}
    return 0;
}

