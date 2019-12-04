#include <stdio.h>
#include <process.h>
#include <math.h>

// Generates R-series.

int main(int argc, char **argv)
{
	printf("hello R-series\n");
int n;
float m;
	m = 3;
float r = (1/m);
float rTerm =1 ;
float a = 1.0;
float x;
int limit = 100;

// The sum will quickly approach 1 + 1/(m-1).

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
