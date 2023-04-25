//Write a program to copy string from one string to another string with user define function

#include<stdio.h>
#include<string.h>


/* Function prototype */
void mystrcpy(char str2[30], char str1[30]);

/* Main function */
int main()
{
 char str1[30], str2[30];
 int i;
 

 printf("Enter string:\n");
 gets(str1);
 
 mystrcpy(str2, str1);
 
 printf("\nCopied string is: %s", str2);
 
 return 0;
}

/* Function Definition*/
void mystrcpy(char str2[30], char str1[30])
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}
