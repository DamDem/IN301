#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tableau
{
	int taille;
	int tab[100];
};
typedef struct Tableau tbl;

int alea(int n)
{
	return rand()%n;
}

tbl init_tab()
{
	int i;
	tbl t;
	t.taille=10;
	for (i=0;i<t.taille;i++)
	{
		t.tab[i]=alea(20);
	}
	return t;
}

void affiche(tbl t)
{
	int i;
	printf("\n");
	for (i=0;i<t.taille;i++)
	{
		printf("%d \n",t.tab[i]);
	}
	printf("\n");
}

tbl decale(tbl t)
{
	int i;
	t.taille++;
	for (i=t.taille-1;i>0;i--)
	{
		t.tab[i]=t.tab[i-1];
	}
	t.tab[0]=0;
	return t;
}

int main(int argc, char **argv)
{
	//1
	/*unsigned a;
	a=sizeof (tbl);
	printf("\n %d \n\n",a);*/
	
	//2et3
	srand(time(NULL));
	tbl t;
	t=init_tab();
	affiche(t);
	
	
	
	
	
	
	
	return 0;
}

