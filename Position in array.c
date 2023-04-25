//Write a Program of find the element of given position from the array.
#include<stdio.h>
int main()
{
	int a,i,num[10]={25,97,74,36,89,43,78,51,62,10};
	printf("Your array is: ");
	for(i=0;i<10;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n\nEnter the position in array: ");
	scanf("%d",&a);
	printf("\nElement in the array at %d position is = %d",a,num[a-1]);
	return 0;
}
