#include <stdio.h>
#include <stdlib.h>

//char *laczenie(char *n1,char *n2);



char *laczenie(char *n1,char *n2)
{
   char *wynikl;
   int k=0,i,j;
   wynikl=(char *)malloc(27*sizeof(char));
   for(i=0;n1[i]!='\0';i++)
//	for(i=0;i<15;i++)
	wynikl[i]=n1[i];
//   for(j=i;n2[k]!='\0';j++)
	for(j=i;j<26;j++)
	{
  	wynikl[j]=n2[k];
	k++;};
    wynikl[j]='\0';

   return wynikl;
}

int main ()
{
   char napis1[]="test";
   char napis2[]="testoo";
   char *wynik;
   wynik=laczenie(napis1,napis2);
   printf("Polaczony napis to: %s", wynik);
   free(wynik);
   return 0;
}
