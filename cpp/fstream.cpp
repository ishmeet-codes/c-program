#include<iostream>
#include<fstream>
using namespace std;
int main() {
fstream FileName;
    FileName.open("nnnnnn", ios::out);
    if (!FileName){
        cout<<"Error while creating the file";
    }
    else{
        cout<<"File created successfully";
        FileName.close();
    }
    return 0;
}
