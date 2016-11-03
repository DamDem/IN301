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

int testtrie(liste l)
{
	if (estVide(l) || estVide (l->suiv)) return 1;
	if (l->val >l->suiv->val) return 0;
	return testtrie (l->suiv);
}

liste inseretrie(liste l,int e)
{
	if (!testtrie(l))
	{
		printf("erreur");
		return l;
	}
	if (estVide(l) || e<l->val) return insered (l,e);
	l->suiv=inseretrie(l->suiv,e);
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
}

int nbelem(liste l)
{
	int n;
	while (!estVide(l))
	{
		n++;
		l=l->suiv;
	}
	return n;
}

int main()
{
	int i;
	liste l=creerListe();
	l=insered(l,2);
	l=insered(l,3);
	l=insered(l,1);
	afficheliste(l);
	i=nbelem(l);
	printf("\n%d\n",i);
	libere(l);
	return 0;
}

liste supp(liste l,int e)
{
	liste l2;
	if (estVide(l))return l;
	if (l->val==e)
	{
		l2=l->suiv;
		free(l);
		return l2;
	}
	l->suiv=supp(l->suiv,e);
	return l;
}
	
	
	

