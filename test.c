#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

void number_squared(char *num_string)
{
    int result;
    int num;

    result = 0;
    num = atoi(num_string);
    if(num  >= 1 && num <= 10)
    {
       result =  num * num;
       printf(" O numero %i ao quadrado é %i", num, result); 
    }
    else
    {
        printf("O NUMERO PRECISA ESTAR ENTRE 1 E 10")
    }
}