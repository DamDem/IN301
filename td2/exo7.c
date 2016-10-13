#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somme()
{
	double e=0.000001;
	int i=1;
	double S=0;
	double S1= 1;
	 
	while(1)
	{
		S=1/pow(i,2)+S;
		if ((fabs(S-S1))<e)
		{
			return (S);
		}
		i++;
		S1=S;
	}
}	


int main(int argc, char **argv)
{
	printf("%f",somme());
	
	return 0;
}
