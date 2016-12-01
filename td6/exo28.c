#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wc(char* str){
	int i;
	FILE* fic=fopen(str,"r");
	if (fic==NULL){
		printf("échec ouverture fichier %s\n",str);
		exit(EXIT_FAILURE);
	}
	while(fgetc(str)!=EOF) i++;
	return i;
}

int main(int argc, char **argv)
{
	
	return 0;
}

