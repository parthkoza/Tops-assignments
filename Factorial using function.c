//Write a program to find out the factorial of given number using function

#include<stdio.h>
#include<math.h>
int factorial(int a)
{
    int i,factorial=1;
    for(i=1; i<=a; i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
	int a;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&a);
    printf("\nFactorial of a Given Number is: %d ",factorial(a));
    return 0;
}

