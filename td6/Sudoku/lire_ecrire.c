#include <stdio.h>
#include <stdlib.h>
#include "constantes.h"
#include "sudoku.h"
#include <time.h>
#include <string.h>

void ecrire (SUDOKU S){
	
}

SUDOKU lire(char* str){
	SUDOKU S;
	int x,y,k;
	FILE* fic=fopen(str,"r");
	if (fic==NULL){
		printf("échec ouverture fichier %s\n",str);
		exit(EXIT_FAILURE);
	}
	S.mode=JOUER;
	for (y=N-1 ; y>=0 ; y--)
		for (x=0 ; x<N ; x++) {
			fscanf(fic,"%d ",&k);
			S.la_case[x][y].val=k;
		}
	for (y=N-1 ; y>=0 ; y--)
		for (x=0 ; x<N ; x++){
			fscanf(fic,"%d ",&k);
			S.la_case[x][y].modifiable=k;
		}
	fclose(fic);
	return S;
}
