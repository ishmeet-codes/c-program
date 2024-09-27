//first row sorting
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define M 3
#define N 3
int sortRowWise(int m[M][N])
{
  for (int i = 0; i < M; i++)
    sort(m[i], m[i] + N);
  for (int i = 0; i < M; i++) 
  {
    for (int j = 0; j < N; j++)
      cout << (m[i][j]) << " ";
    cout << endl;
  }
}
int main()
{
  int m[M][N] = {{3,2, 1},
                 {6,5,4},
                 {9,8,7}};
  sortRowWise(m);
}
