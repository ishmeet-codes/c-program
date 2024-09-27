//ternary search
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int ternarysearch(int l, int r, int x, int arr[])
{
	if(r>=l)
	{
		int ml = l + (r - l) / 3;
        int mr = r - (r - l) / 3;

        if (arr[ml] == x) 
		{
            return ml;
        }
        if (arr[mr] == x)
		{
            return mr;
        }
        
		if (x < arr[ml]) 
		{
            return ternarysearch(l, ml - 1, x, arr);
        }
        else if (x > arr[mr])
		{
            return ternarysearch(mr + 1, r, x, arr);
        }
        else 
		{
            return ternarysearch(ml + 1, mr - 1, x, arr);
        }
    }
    return -1;
}



int main(){
	int l=0;
	
	int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int r=20;
	int x,p;
	
	cout<<"ENTER NUMBER TO FIND:- ";
	cin>>x;
 p = ternarysearch(l, r, x, arr);

    cout << "Index of " <<x
         << " is " << p << endl;
	return 0;
}
