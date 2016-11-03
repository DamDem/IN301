#include <stdio.h>
#include <stdlib.h>

struct element{
	int val;
	struct element* suiv;
};
typedef struct element elm;
typedef elm* liste;
typedef int bool;

liste creerListe()
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
	l2=malloc(sizeof(elm));
	if (l2==NULL)
	{
		printf(" erreur memoire  ");
		exit (EXIT_FAILURE);
	}
	l2->val=e;
	l2->suiv=l;
	return l2;
}

liste inseref(liste l,int e)
{
	liste l2,lfin;
	if(!estVide(l))
	{
		return insered(l,e);
	}
	lfin=l;
	while(!estVide(lfin->suiv))
	{
		lfin=lfin->suiv;
	}
	l2=malloc(sizeof(elm));
	if(l2==NULL) exit (EXIT_FAILURE);
	l2->val=e;
	l2->suiv=l2;
	return l;
}

liste inserefrec(liste l,int e)
{
	if(estVide(l)) return insered(l,e);
	l->suiv=inserefrec(l->suiv,e);
	return l;
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

void afficheliste(liste l)
{
	if (!estVide(l))
	{
		printf("\n%d",l->val);
		afficheliste(l->suiv);
	}
	printf("\n");
}

int main()
{
	liste l=creerListe();
	l=insered(l,2);
	l=insered(l,3);
	l=insered(l,1);
	afficheliste(l);
	libere(l);
	return 0;
}

