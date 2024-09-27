#include <stdio.h>
int main()
	{    
	int num[10],i,x,found,max,min,y,mid;
	printf("Enter  10 number:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    int  j,temp;     
        
    for(i = 0; i<10; i++)    
    {    
        for(j = i+1; j<10; j++)    
        {    
            if(num[j] < num[i])    
            {    
                temp = num[i];    
                num[i] = num[j];    
                num[j] = temp;     
            }     
        }     
    }     
    printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<10; i++)    
    {    
        printf("%d\n",num[i]);    
    }  
	 
	 printf("Enter the number to search for: ");
    scanf("%d", &x);

    
    for (i = 0; i < 10; i++) {
        if (num[i] == x) {
            printf("Number %d found at index %d.\n", x, i+1);
            found = 1;
            break;
        }
    }

     if(!found) {
        printf("Number %d is not found in the array.\n", num);
    }
    
    
    
            max = num[9];
    

    printf("The maximum number in the array is: %d\n", max);


            min = num[0];
        
    printf("The minimum number in the array is: %d\n", min);
  y= num[4]+num[5];
  mid=y/2;
  printf("The medium number in the array is: %d\n", mid);
}     
