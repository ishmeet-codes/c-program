#include <stdio.h>
void fm(int arr[], int N)
{
    int temp[N + 1];
    for (int i = 0; i <= N; i++) {
        temp[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        temp[arr[i] - 1] = 1;
    }

    int ans;
    for (int i = 0; i <= N; i++) {
        if (temp[i] == 0)
            ans = i + 1;
    }
    printf("%d", ans);
}

int main()
{int n,arr[100],i,x;
	printf("Enter size of array:- ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d of array :- ",i+1);
		scanf("%d",&arr[i]);
	}
    fm(arr, n);
}
