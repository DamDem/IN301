#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct elemArith{
	double val;
	int type; // 0=val , 1=+ , 2=*
	struct elemArith* fgauche;
	struct elemArith* fdroite;
};

typedef struct elemArith* arithExpr;


int parenthese_pos(char *s){//retourne la position de la parenthèse qui ferme la parenthèse en position 0
	int pos,cpt;
	if (s[0]!='(') {
		printf("les parenthèses plz"); 
		exit(EXIT_FAILURE);
	}
	do {
		if(s[pos]=='\0') { //test sortie
			printf("parenthèses non fermée ou expression vide");
			exit(EXIT_FAILURE);
		}
		if(s[pos]=='(') cpt+=1;
		if(s[pos]==')') cpt-=1;
		pos++;
	} while (cpt!=0);
	return pos;
}


arithExpr lire_chaine(char *s){
	if (s[0]=='\0')return NULL;
	arithExpr new=malloc(sizeof(arithExpr));
	if (s[0]!='('){
		new->type=0;
		scanf(s,"%f",&new->val);
		new->fdroite=NULL;
		new->fgauche=NULL;
	}
	else{
		int pos=parenthese_pos(s);
		if (s[pos+1]=='+') new->type=1;
		else new->type=2;
		new->fgauche=lire_chaine(s+1);
		new->fdroite=lire_chaine(s+pos+3);
	}
	return new;
}


void affiche(arithExpr a){

}

double eval_arith(arithExpr a){
	
 return 0;
}

arithExpr rand_arith(int n, int m){
	return NULL;
	
}

void free_arith(arithExpr a){
	
}

arithExpr simplifie(arithExpr a){
	return NULL;
}


int main(int argc, char **argv){

	srand(time(NULL));

	if(argc != 2){
		printf("Il doit y a voir comme unique argument le chemin du fichier à ouvrir \n");	
		exit(1);
	}
	
	FILE *f = fopen(argv[1],"r");
	char buffer[300];
	fscanf(f,"%s",buffer);
	printf("Taille du fichier : %d\n",(int)strlen(buffer));
	printf("Contenu du fichier %s\n",buffer);
	
	////////////////// Test des fonctions ///////////////////////

	arithExpr a = lire_chaine(buffer);
	affiche(a);
	printf("\nValeur de l'expression : %f\n",eval_arith(a));
	free_arith(a);
	a = rand_arith(5,100);
	affiche(a);
	free_arith(a);
	fclose(f);
	exit(0);

}
