#include <stdio.h>

struct element{
	int val;
	struct element* suiv;
};
typedef struct element elm;
typedef elm* liste;
typedef int bool;

liste creerListe(liste l)
{
	return NULL;
}
int estVide(liste l)
{
	return l==NULL;
}

liste insered(liste l, int e)
{
	liste l2;
	l2=malloc(size(elm));
	if (l2==NULL)
	{
		printf("   ");
	}
	exit (EXIT_FAILURE);
	l2->val=e;
	m2->suiv=l;
	exit (EXIT_SUCCESS);
}

void libere(liste l)
{
	liste l2;
	while (!estVide(l))
	{
		l2=l->suiv;
		free(l);
		l=l2;
	}
}

int main(int argc, char **argv)
{
	
	return 0;
}

