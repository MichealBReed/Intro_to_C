#include <stdio.h>

int main (void)
{
    int integerVal = 100;
    float floatingVal = 331.93;
    double doubleVal = 8.293e+10;
    char charVal = 'L';

    _Bool boolVar = 0;

    printf("integerVal : %i\n",integerVal);
    printf("floatingVal : %f\n", floatingVal);
    printf("doubleVal : %g\n", doubleVal);
    printf("doubleVal : %e\n", doubleVal);
    printf("charVal : %c\n", charVal);

    printf("boolVar : %i\n", boolVar);

    return 0;
}
