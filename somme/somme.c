#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
	double somme=0;
	int i;
	for (i=1;i<argc;i++)
	{
		if((atof(argv[i])<0)||(isdigit(*argv[i]) !=0 )){
			somme+=atof(argv[i]);
		}
		else printf("%d nop\n",i);
	}
	printf("%f\n",somme);
	return 0;
}

/*correction
 * 
 * 
 * int main(int argc,char** argv){
 * 		testArgs(argc,argv);
 * 
 * 		return 0;
 * }
 * 
 * int testArgs (int argc,char** argv){
 * 		int i;
 * 		for (i=0;i<argc;i++){
 * 			if(!testMot(argv[i]) return 0;
 *		return 1;
 * }
 * 
 * int testMot (char* str){
 * 		int taille=strlen(str);
 * 		int i; int virg = 0;
 * 		if(!(str[0]=='-' || str[0]=='.' || isdigit(str[0])))
 * 			return 0;
 * 		if(str[0]=='.') virg=1;
 * 		for (i=1;i<taille;i++)
 * 		{
 * 			if (!(str[i]=='.' || isdigit(str[i])))
 * 				return 0;
 * 			if (str[i]=='.'{
 * 				if(virg==1) return 0;
 * 				else virg=1;
 * 			}
 * 		}
 * 		return 1;
 * 	}
 * 
 * 
 * 
