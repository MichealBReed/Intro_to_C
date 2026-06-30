#include <stdio.h>

int main (void)
{
    int u,v,temp;

    printf("Please type in two non-negative numbers.\n");
    scanf("%i%i",&u,&v);

    while (v != 0)
    {
        temp = u % v;
        printf("The value of u and v is %i and %i, respectively.\n",u,v);
        u = v;
        v = temp;
    }

printf("Their greatest common divisor is %i\n",u);

return 0;
}