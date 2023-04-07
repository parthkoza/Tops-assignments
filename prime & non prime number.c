#include <stdio.h>
//

int main()
{
	int num,i;
	printf("Enter the Number: ");
	scanf("%d",&num);
 	int a=0;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
		a=1;
		break;
		}
	}
	if(num==1)
	{
		printf("YOUR NUMBER IS NITHER PRIME NOR NON-PRIME");
	}
	else if(a==0)
	{
		printf("YOUR NUMBER IS PRIME");
	}
	else
	{
		printf("YOUR NUMBER IS NON-PRIME");
	}
return 0;
}
