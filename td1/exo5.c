#include <stdio.h>
#include <stdlib.h>

int main()
{
	int secondes,h,m,s;
	
	secondes=56410;
	
	h=secondes/(60*60);
	m=secondes/60;
	while (m>=60)
	{
		m=m-60;
	}
	s=secondes;
	while (s>=60)
	{
		s=s-60;
	}
	
	if (secondes==1) printf("%d seconde correspond a ",secondes);
	else 			 printf("%d secondes correspondent a ",secondes);
	
	if (h==1) printf("%d heure ,",h);
	else 	  printf("%d heures ,",h);
	
	if (m==1) printf("%d minute ,",m);
	else 	  printf("%d minutes ,",m);
	
	if (s==1) printf("et %d seconde.",s);
	else 	  printf("et %d secondes.",s);
}
