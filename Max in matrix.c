//write a program to find out the Max number from given Matrix.

#include<stdio.h>
int main()
{
	int i,j,mat[3][3],max=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Element :");
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nYour Matrix is :\n\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		
			printf("%d ",mat[i][j]);
		}
		printf("\n");
		
	}
		for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
    	{
			
		if(mat[i][j]>max)
		max=mat[i][j];
    	}
	}
	printf("\nThe maximum value of above all value is : %d ",max);
	
	
	return 0;
}
