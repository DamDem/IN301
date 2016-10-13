#include <stdio.h>

void permuter(int *a,int *b)
{
	int x;
	x=*a;
	*a=*b;
	*b=x;
}

void reinitpointeur (int**p)
{
	*p=NULL;
}

int main(int argc, char **argv)
{
	//1
	/*
	unsigned a;
	a=sizeof (int[46]);
	printf("\n %d \n\n",a);
	*/
	
	//2
	/*
	int x,y;
	x=1000;
	y=20;
	permuter(&x,&y);
	printf("\n x=%d \n y=%d \n\n",x,y);
	*/
	
	//3
	int a=1;
	int* p=&a;
	reinitpointeur(&p);
	printf("\n a=%d \n p=%p \n\n",a,p);
	
	return 0;
}

