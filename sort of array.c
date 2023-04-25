//Write a program to sort the array of 5 elements.

#include<stdio.h>
int main()
{
	int i,j,num[5],min;
	for(i=0;i<5;i++)
	{
		printf("Enter a %d number :",i+1);
		scanf("%d",&num[i]);
		
	}
	printf("\nYour values are :");
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	 for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(num[j] <num[i])
            {
                min = num[i];
                num[i] = num[j];
                num[j] = min;
            }
        }
    }
    	printf("\n\nAfter sorting the values are :");
	for(i=0;i<5;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}
