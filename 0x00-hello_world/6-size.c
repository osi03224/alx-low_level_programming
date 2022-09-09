#include <stdio.h>
/**
*main -is the entry point of the program.
*
*Return:zero of no error, Non-zero value if errors.
*/
int main(void)
{
printf("Size of a char: %1d byte(s)\n", sizeof(char));
printf("Size of an int: %1d byte(s)\n", sizeof(int));
printf("Size of a long int: %1d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %1d byte(s)\n", sizeof(long long int));
printf("size of a float: %1d byte(s)\n", sizeof(float));
return (0);
}

