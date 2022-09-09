#include<stdio.h>
#include<time.h>
#include<stdio.h>

/**
 * main - this is the entry point of the program
 * Description: this program will tell whether 
 * the integer is positive, negative or zero
 *
 * Return 0: when successful
 *
 */
int main(void)
{
int a;
srand(time(0));
	a = rand() - RAND_MAX / 2;
if (a > 0)
{
	printf("%di is positive\n", a);
}
else if (a == 0)
{
	printf("%i is zero\n", a);
else if (a < 0)
{
	printf("%i is negative\n", a);
}



