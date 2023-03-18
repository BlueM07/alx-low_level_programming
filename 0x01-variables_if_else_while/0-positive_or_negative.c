1 #include <stdlib.h> 
2 #include <time.h> 
3 #include <stdio.h> 
4
5 /**
6 * main - is n positive or negativ
7 * @parametern: n is a random number
8 (* 
9 * print whether the number stored in the variable n is positive or negative
10 (* section header: what is a section header)*
11 * Return: the return value is n value and wether it is positive or negative
12 */ 
13
14 int main(void) 
15{ 
16        int n; 
17
18      srand(time(0)); 
19        n = rand() - RAND_MAX / 2; 
20 
21              printf(n=%d ",n); 
22        if (n>0)
23        { 
24           printf("is positive"); 
25        } else
26        { 
27            if ( n < 0) 
28                 printf("is negative");
29            else 
30                printf("is zero");                  
31         }        
32         
33       printf("\n");
34            
35 return (0);
36
37 }
