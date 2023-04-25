//Pyramid Programs

#include<stdio.h>
int main()
{
	int i,j,a=1,k;
	for(i=1;i<=4;i++)
	
	{
		for(k=4;k>i;k--)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("%d ",a++);
		}
		printf("\n");
	}
	
}
