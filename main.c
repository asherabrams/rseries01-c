#include <stdio.h>
#include <process.h>
#include <math.h>

// Generates R-series.

int main(int argc, char **argv)
{
	printf("hello R-series\n");
int n;
float q;
	q = 10;
float r = (1/q);
float rTerm =1 ;
float a = 1.0;
float x;
int limit = 50;

// The sum will quickly approach 1 + 1/(q-1).

x = a * rTerm;
for(n = 1; n <= limit; n++)
{
printf("%i : %f :%f\n", n, rTerm, x);
rTerm = rTerm*r;
x = x+ rTerm;
    
    }

	system("pause");
	return 0;
}
