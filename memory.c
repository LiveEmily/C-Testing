#include <stdio.h>   
#include <stdlib.h>
 
int main(void) 
{
    while(1) 
    {
        int *p1 = malloc(100000*sizeof *p1);
    };

    system("pause");
}