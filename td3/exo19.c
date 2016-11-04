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
int estVide(liste l) //test liste vide
{
	return l==NULL;
}

liste insered(liste l, int e) //insérer élément au début
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

liste inseref(liste l,int e) //insérer élément a la fin
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

liste inserefrec(liste l,int e) //insérer élément a la fin récursive
{
	if(estVide(l)) return insered(l,e);
	l->suiv=inserefrec(l->suiv,e);
	return l;
}

int testtrie(liste l) //test liste triée
{
	if (estVide(l) || estVide (l->suiv)) return 1;
	if (l->val >l->suiv->val) return 0;
	return testtrie (l->suiv);
}

liste inseretrie(liste l,int e) //inséré élément dans une liste triée
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

void libere(liste l) //libéré la mémoir réservée par la liste
{
	liste l2;
	while (!estVide(l))
	{
		l2=l->suiv;
		free(l);
		l=l2;
	}
}

void afficheliste(liste l) //afficher la liste
{
	if (!estVide(l))
	{
		printf("\n%d\n",l->val);
		afficheliste(l->suiv);
	}
}

int nbelem(liste l) //nombre d'éléments dans la liste
{
	int n;
	while (!estVide(l))
	{
		n++;
		l=l->suiv;
	}
	return n;
}

liste supp(liste l,int e) //supprimer la liste
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

int recherche_elem(liste l, int i) //recherche d'un élément
{
	if(estVide(l))return -1;
	int j = 0;
	while (l->suiv)
	{
		if (i == l->val) return j;
		j++;
		l = l->suiv;
	}
	if(i == l->val) return j;
	return -1;
}

liste supp_elem (liste l, int i) //supprime l'élément d'indice i
{
	if(estVide(l))return l;
	liste tmp;
	if(i == 0)
	{
		tmp = l->suiv;
		free(l);
		return tmp;
	}
	liste debut = l;
	int j = 0;
	while(l->suiv->suiv)
	{
		if(j == i-1)
		{
			tmp = l->suiv;
			l->suiv = l->suiv->suiv;
			free(tmp);
			return debut;
		}
		j++;
		l = l->suiv;
	}
	if(j == i-1)
	{
		tmp = l->suiv;
		l->suiv = NULL;
		free(tmp);
	}
	return debut;
}

int main()
{
	liste l=creerListe();
	l=insered(l,2);
	l=insered(l,3);
	l=insered(l,1);
	afficheliste(l);
	supp_elem(l,0);
	afficheliste(l);
	libere(l);
	return 0;
}


	

