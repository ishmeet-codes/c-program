#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Structure to store student information
struct Student {
   
    string name;
    int classNum;
    int rollNum;
    int marks1;
    int marks2;
    int total;
};

// Function to swap two students
void swapStudents(Student& a, Student& b) {
    Student temp = a;
    a = b;
    b = temp;
}

// Function to sort students based on total marks (Selection Sort)
void sortStudents(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (students[j].total > students[maxIndex].total) {
                maxIndex = j;
            }
        }
        swapStudents(students[i], students[maxIndex]);
    }
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
       
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Class: ";
        cin >> students[i].classNum;
        cout << "Roll Number: ";
        cin >> students[i].rollNum;
        cout << "Marks 1: ";
        cin >> students[i].marks1;
        cout << "Marks 2: ";
        cin >> students[i].marks2;
        students[i].total = students[i].marks1 + students[i].marks2;
    }
    int x;
cout<<"\nName  \tClass Roll no Marks1 Marks2  Total";
for ( x=0;x<n;x++){
	cout <<"\n"<<students[x].name<<"\t"<<students[x].classNum<<"\t"<<students[x].rollNum<<"\t"<<students[x].marks1<<"\t"<<students[x].marks2<<"\t"<<students[x].total <<"\n";
}


    // Sort students based on total marks
    sortStudents(students, n);

    // Print sorted student information
    cout << "\nSorted Student Information:\n";
    cout<<"\nName  \tClass Roll no Marks1 Marks2  Total";
for ( x=0;x<n;x++){
	cout <<"\n"<<students[x].name<<"\t"<<students[x].classNum<<"\t"<<students[x].rollNum<<"\t"<<students[x].marks1<<"\t"<<students[x].marks2<<"\t"<<students[x].total <<"\n";
}

    return 0;
}
