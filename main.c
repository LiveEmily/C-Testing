#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int add(int a, int b, int sum);
 
int main() { 
 
           /* I am C developer */ 

           bool breakCode = true;

           char operator;

           int a, b, sum;

           char yOn;

           while(breakCode)
           {
               printf("What operation would you like to do? \n"); 

               scanf_s(" %c", &operator, 1);

               switch(operator)
               {
                    case '+':
                        printf("Please give me the first number to add together.\n"); 

                        scanf_s(" %d", &a, 1);

                        printf("Please give me the second number to add together.\n"); 

                        scanf_s(" %d", &b, 1);

                        printf("Your addition concluded in the number %d\n", add(a, b, sum));

                    break;

                    case '-':
                        printf("Please give me the first number to divide together.\n"); 

                        scanf_s(" %d", &a, 1);

                        printf("Please give me the second number to divide together.\n"); 

                        scanf_s(" %d", &b, 1);

                        printf("Your substraction concluded in the number %d\n", substract(a, b, sum));

                    break;

                    case '*':
                        printf("Please give me the first number to multiply together.\n"); 

                        scanf_s(" %d", &a, 1);

                        printf("Please give me the second number to multiply together.\n"); 

                        scanf_s(" %d", &b, 1);

                        printf("Your multiplication concluded in the number %d\n", multiply(a, b, sum));

                    break;

                    case '/':
                        printf("Please give me the first number to divide.\n"); 

                        scanf_s(" %d", &a, 1);

                        printf("Please give me the second number to divide.\n"); 

                        scanf_s(" %d", &b, 1);

                        printf("Your division concluded in the number %d\n", divide(a, b, sum));

                    break;

                    case '%':
                        printf("Please give me the first number to divide.\n"); 

                        scanf_s(" %d", &a, 1);

                        printf("Please give me the second number to divide.\n"); 

                        scanf_s(" %d", &b,1 );

                        printf("Your division concluded in the number %d as the remainder\n", remain(a, b, sum));

                    break;
                }

                system("pause");

                system("cls");

                printf("Would you like to do another math operation? y = yes, n = no\n");

                scanf_s("%c", &yOn, 1);

                if(yOn == 'y')
                {
                    breakCode = true;
                }
                else
                {
                    breakCode = false;
                }              

                system("cls");
           }
               
           return 0; 
}

int scanf_s(
    const char *format []
);

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