//Lab 10. Variant 1. Yaskovich Dmitry (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//defining header files
#include <string.h>

int filling(int a, int b, int qty, int *array); //functions prototypes

int main(void)//main function
{
 int i;
 char string1 [100],string2 [100], charmax[100], charword[100],symbol;
  printf("Enter string: ");//input
 gets(string1);
 //scanf("%d %d", &a,&b);
/* for (i = 0; i < 100; i++)
 {
  string1[i]=' ';
  string2[i]=' ';
  charmax[i]=' ';
  charword[i]=' ';
 } */
 for (i = 0; i < strlen(string1); i++)
 {
  symbol=string1[i];
  if (strchr(" `~!@#$%^&*()_+{}|:<>?/.,\][-",symbol))
  {
	printf("%s",charword);
	strcpy(charword,string2);
	strcpy(charword,"");
  }
  else
  {
  charword[i]=symbol;
	   strcat(string2,charword);
  }
 }
 fflush(stdin);//waiting for the user
 getchar();
 return 0;
}

