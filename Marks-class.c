#include<stdio.h>
//enter the marks of 5 subjects and determine overall class
int main()
{
	float a,b,c,d,e,f,x;
	printf("Enter the marks of different sunjects:--\nPHYSICS: ");
	scanf("%f",&a);
	printf("CHEMISTRY: ");
	scanf("%f",&b);
	printf("MATHEMATICS: ");
	scanf("%f",&c);
	printf("BIOLOGY: ");
	scanf("%f",&d);
	printf("ENGLISH: ");
	scanf("%f",&e);
	printf("COMPUTER: ");
	scanf("%f",&f);
	x=(a+b+c+d+e+f)*100/600;
	printf("\nYOUR OVERALL PERCENTAGE IS= %f%",x);
	if(x>75)
	{
		printf("\nYOU HAVE PASSED THIS EXAM WITH DISTINCTION");
	}
	else if(x>60)
	{
		printf("\nYOU HAVE PASSED THIS EXAM WITH FIRST CLASS");
	}
	else if(x>50)
	{
		printf("\nYOU HAVE PASSED THIS EXAM WITH SECOND CLASS");
	}
	else if(x>35)
	{
		printf("\nYOU HAVE PASSED THIS EXAM WITH PASS CLASS");
	}
	else
	{
		printf("\nSORRY!!\nBETTER LUCK NEXT TIME");
	}
	return 0;
}
