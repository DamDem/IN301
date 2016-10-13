#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,x,y;
	
	x=23;
	y=87;
	r=0;
	
	printf ("%d x %d\n",x,y);
	
	while (x!=1)
	{
		if (x%2==0)
		{
			x=x/2;
			y=2*y;
		}
		else
		{
			x=x-1;
			r=r+y;
		}
		printf ("= %d x %d + %d\n",x,y,r);
	}
	printf ("= %d\n",y+r);
}
