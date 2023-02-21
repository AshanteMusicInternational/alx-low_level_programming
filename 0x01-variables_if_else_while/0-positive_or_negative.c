#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints if a number is  positive or negative
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int n;

strand(time(0));
n = rand() - RAND_MAX / 2;
/* check if the number is negative */
if (n < 0)
{
print("%d is negative\n", n);
}
else if (n > 0)
{
printf("%d is positive\n" n);
}
else
{
printf("%d is zero\n" n);
}
return (0);
}
