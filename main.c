#include <stdio.h>

int add(int a, int b, int sum);
 
int main() { 
 
           /* I am C developer */ 

           char operator;

           int a, b, sum;
 
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

           system("pause"); 
               
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