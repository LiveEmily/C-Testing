#include <stdio.h>

int add(int a, int b, int sum);
 
int main() { 
 
           /* I am C developer */ 

           char operation[50];

           int a, b, sum;
 
           printf("What operation would you like to do? \n"); 

           gets(operation);

           printf("Please give me the first number to %s together.\n", operation); 

           scanf("%d", &a);

           printf("Please give me the second number to %s together.\n", operation); 

           scanf("%d", &b);

           if(strcmp(operation, "add")==0)
           {
               printf("Your addition concluded in the number %d\n", add(a, b, sum));
           };

           system("pause"); 
               
           return 0; 
}

int add(int a, int b, int sum)
{
    return sum = a + b;
}