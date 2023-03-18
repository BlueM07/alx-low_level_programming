#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - last digit of a given number
* n is a random number
(* a blank lin
* last digit and if conditions
* (* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n%10;
if (lastdigit>5) {
printf("Last digit of %d is %d and is greater than 5 /n" , n,lastdigit);
}
else
{
if (lastdigit<6 && lastdigit!=0) {
printf ("Last digit of %d is %d and is less than 6 and not 0/n",n , lastdigit);
}
else {
printf ("Last digit of %d is %d and is 0/n" , n,lastdigit);
}
}
return (0);
}
