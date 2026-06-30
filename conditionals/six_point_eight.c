/*Script that performs an arithmetic operatio given three arguments respectively:
value 1 mathematical operation value 2:*/

#include <stdio.h>

int main (void)
{
    float v1,v2;
    char operation;

    printf("Type in the expression: ");
    scanf("%f %c %f",&v1,&operation,&v2);

    if (operation == '+')
        {
            float sum;
            sum = v1 + v2;
            printf("%.2f + %.2f = %.2f\n",v1,v2,sum);
        }

    if (operation == '-')
        {
            float diff;

            diff = v1 - v2;

            printf("%.2f - %.2f = %.2f\n",v1,v2,diff);
        }

    if (operation == '/')
        {
            float div;

            div = v1 / v2;

            printf("%.2f / %.2f = %.2f\n",v1,v2,div);
        }
    
    if (operation == '*')
        {
            float product;

            product = v1 * v2;

            printf("%.2f * %.2f = %.2f\n",v1,v2,product);
        }

    return 0;
    
}