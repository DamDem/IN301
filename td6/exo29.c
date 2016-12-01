#include <stdio.h>
#include <string.h>
#define HMAX 1024
#define LMAX 1024

struct couleur{
	int r,g,b;
};
typedef struct couleur COULEUR;

struct image{
	int hauteur,largeur;
	COULEUR tab [HMAX][LMAX];
};
typedef struct image IMAGE; 

IMAGE lireImage(char* nomFichier){
	IMAGE img;
	FILE* fic= fopen(nomFichier,"r");
	int i,j;
	char str [10];
	fgets(str,10,fic);
	if (strcmp(str,"P3")!=0) exit(0);
	fscanf(fic,"%d",&(img.largeur));
	fscanf(fic,"%d",&(img.hauteur));
	fscanf(fic,"%d",&i);
	for(i=0;i<img.hauter;i++){
		for(j=0;j<img.hauteur;j++){
			fscanf(fic,"%d",&(img.tab[i][j].r));
			fscanf(fic,"%d",&(img.tab[i][j].g));
			fscanf(fic,"%d",&(img.tab[i][j].b));
		}
	}
	fclose(fic);
	return img;
}
	

int main(int argc, char **argv)
{
	IMAGE img=lireImage("windows_sucks.ppm");
	return 0;
}

