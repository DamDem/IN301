#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int wc(char* str){
	int i;
	FILE* fic=fopen(str,"r");
	if (fic==NULL){
		printf("échec ouverture fichier %s\n",str);
		exit(EXIT_FAILURE);
	}
	while(fgetc(str)!=EOF) i++;
	return i;
}*/

int main(int argc, char **argv)
{
	int cpt=0;
	FILE F=fopen(argv[1],"r");
	if (fic==NULL){
		printf("échec ouverture fichier %s\n",str);
		exit(EXIT_FAILURE);
	}
	while (fgetc(fic)!= EOF) cpt++;
	printf("%d \n",cpt);
	fclose(fic)
	return 0;
}

/*pour lignes
 * while (fgets(s,size,fic) != NULL) cpt++;
 * char s[256];
 * int size=256

