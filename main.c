#include <stdio.h>
#include <stdlib.h>

int add(int a, int b, int sum);

int i = 0;
 
int main() { 
 
           /* I am C developer */ 

           char operator;

           int a, b, sum;

           char yON;

           while(i<10)
           {
               printf("What operation would you like to do? \n"); 

               scanf("%c", &operator);

               switch(operator)
               {
                    case '+':
                        printf("Please give me the first number to add together.\n"); 

                        scanf("%d", &a);

                        printf("Please give me the second number to add together.\n"); 

                        scanf("%d", &b);

                        printf("Your addition concluded in the number %d\n", add(a, b, sum));

                    break;

                    case '-':
                        printf("Please give me the first number to divide together.\n"); 

                        scanf("%d", &a);

                        printf("Please give me the second number to divide together.\n"); 

                        scanf("%d", &b);

                        printf("Your substraction concluded in the number %d\n", substract(a, b, sum));

                    break;

                    case '*':
                        printf("Please give me the first number to multiply together.\n"); 

                        scanf("%d", &a);

                        printf("Please give me the second number to multiply together.\n"); 

                        scanf("%d", &b);

                        printf("Your multiplication concluded in the number %d\n", multiply(a, b, sum));

                    break;

                    case '/':
                        printf("Please give me the first number to divide.\n"); 

                        scanf("%d", &a);

                        printf("Please give me the second number to divide.\n"); 

                        scanf("%d", &b);

                        printf("Your division concluded in the number %d\n", divide(a, b, sum));

                    break;

                    case '%':
                        printf("Please give me the first number to divide.\n"); 

                        scanf("%d", &a);

                        printf("Please give me the second number to divide.\n"); 

                        scanf("%d", &b);

                        printf("Your division concluded in the number %d as the remainder\n", remain(a, b, sum));

                    break;
                }

                system("cls");

                printf("Would you like to do another math operation? y = yes, n = no");

                yON = getchar();

                if(yON == 'y')
                {
                    break;
                }
                else
                {
                    exit(0);
                }
                

                system("cls");
           }
               
           return 0; 
}

int add(int a, int b, int sum)
{
    return sum = a + b;
}
int substract(int a, int b, int sum)
{
    return sum = a - b;
}
int multiply(int a, int b, int sum)
{
    return sum = a * b;
}
int divide(int a, int b, int sum)
{
    return sum = a / b;
}
int remain(int a, int b, int sum)
{
    return sum = a % b;
}