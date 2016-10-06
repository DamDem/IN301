#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int testprimalite(int n)
{
	int i=0;
	for (i=2;i<sqrt(n);i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}

int main(int argc, char **argv)
{
	
	printf("%d\n",testprimalite(11));
	
	return 0;
}

