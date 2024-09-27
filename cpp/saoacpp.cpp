#include <iostream>
using namespace std;

void printArray(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void sortRowWise(int m[3][3], int r, int c) 
{
    int t = 0; 
    

    for (int i = 0; i < r; i++) {  
    for (int j = 0; j < c; j++) { 
        
            for (int k = 0; k < c - j - 1; k++) { 
                
                if (m[i][k] > m[i][k + 1]) { 
                    t = m[i][k]; 
                    m[i][k] = m[i][k + 1]; 
                    m[i][k + 1] = t; 
                } 
            } 
        } 
    }
     cout << "\nAfter sorting:" << endl;
     for( int i=0;i<3;i++){
     	for( int j=0;j<3;j++){
     		cout<<m[i][j];
		 }cout<<"\n";
	 }


}
int main() {
    const int rows = 3;
    const int cols = 3;
int m[3][3];
    int arr[rows][cols] = {{3, 2, 1},{6, 5, 4},  {9, 8, 7}};

    cout << "Before sorting:" << endl;
    printArray(arr, rows, cols);
  sortRowWise(arr,4, 4);
   

    return 0;
}


