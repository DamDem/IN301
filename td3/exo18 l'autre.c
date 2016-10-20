#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct Tableau Tableau;

struct Tableau {
	int taille;
	int tab[100];	
	};

int alea(int n){
	return rand()%n;
}

Tableau initTableau(){
	Tableau t;
	int i =0;
	t.taille=10;
	int n=20;
	while(i<t.taille){
		t.tab [i] = alea (n);i++;
	}
	return t;
}
void affichTableau(Tableau t){
	int i=0;
	while(i<t.taille+1){
		printf("\n %d",t.tab[i]);
		i++;
	}
	
}
/*int produit(Tableau t){
	int i=0;
	int res=1;
	while(i< t.taille+1){
			;
		
	}
}	
int minimum (Tableau t){
	int mini=t.tab[0];
	int i=0;
	while (i < t.taille+1){
		if(t.tab[i]>mini)
			mini=t.tab[i];}
	return mini;
}
	
	
Tableau decale(Tableau t){
	int i;
	t.taille++;
	for(i=t.taille-1;i>0;i--)
		t.tab[0]=0;
		return tab;
}*/


int partionner( Tableau T, int s, int e){
	int x;	int p; int tmp; int i;
	s=0;
	e=t.taille-1;
	x=alea(t.taille);	
	p=t.tab[x];
	tmp = t.tab[e];
	t.tab[l] = p;
	t.tab [x] = tmp;
	
	
	for(i=0;i<e-1;i++){
		if(T[i] <= T[e]){
			p=t.tab[i];
			tmp = t.tab[s];
			t.tab[s] = p;
			t.tab [i] = tmp;
			s ++;
		}
		p=t.tab[i];
		tmp = t.tab[e];
		t.tab[e] = p;
		t.tab [i] = tmp;
		
		return s;
}

void quicksort (Tableau T){
	



int main(int argc, char **argv)
{
	srand(time(NULL));
	//printf("\n size is %zu\n\n",sizeof (Tableau));
	int s;
	int e;
	Tableau t = initTableau();
	s=0;
	e=t.taille-1;	
	affichTableau(t);
	
	
	return 0;
}

