#include <stdlib.h> 
#include <time.h> 
#include <stdio.h> 
/**
* main - is n positive or negativ
* @parametern: n is a random number
(* 
* print whether the number stored in the variable n is positive or negative
(* section header: what is a section header)*
* Return: the return value is n value and wether it is positive or negative
*/ 
int main(void) 
{ 
int n; 
srand(time(0)); 
n = rand() - RAND_MAX / 2; 
printf("%d ",n); 
if (n>0)
{ 
printf("is positive"); 
} else
{ 
if ( n < 0) 
printf("is negative");
else 
printf("is zero");                  
}        
printf("\n");
return (0);
}
