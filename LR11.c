//Lab 10. Variant 1. Yaskovich Dmitry (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//defining header files
#include <string.h>

int search(char *string1, char *charmax, char *charword, char *symbol, int *length); //functions prototypes

int main(void)//main function
{
 int length=-1,i,j=0,l,lmax=0;
 char string [80], charmax[80], charword[80],symbol[1];
  printf("Enter string: ");//input
 gets(string);
 search(string,charmax,charword,symbol,&length);
 search(string,charmax,charword,symbol,&length);
 /*for (i = 0; i < strlen(string); i++)
 {
  symbol=string[i];
  if ((strchr(" `~!@#$%^&*()_+{}|:<>?/.,\][-	",symbol))|| (i==(strlen(string)-1)))
  {
	 if (i==(strlen(string)-1))
   {
	  charword[i-j]=symbol;
   }
   j=i+1;
	printf("%s\n",charword);
	strcpy(charmax,charword);
	memset(charword,0,sizeof(charword));
  }
  else
  {
  charword[i-j]=symbol;
  }
 }*/
   /*	memset(charword,0,sizeof(charword));
 for (i = 0; i < strlen(string); i++)
 {
  symbol=string[i];
  if ((strchr(" `~!@#$%^&*()_+{}|:<>?/.,\][-	",symbol))|| (i==(strlen(string)-1)))
  {
	 if (i==(strlen(string)-1))
   {
	  charword[i-j]=symbol;
   }
   j=i+1;
   if (length==-1) {
   l=strlen(charword);
	if (l>lmax) {
	 lmax=l;
	}
   }
   else
   {
	if (strlen(charword)==length) {
	 printf("%s\n",charword);
	}
   }
	//printf("%s\n",charword1);
	//strcpy(charmax1,charword1);
	memset(charword,0,sizeof(charword));
  }
  else
  {
  charword[i-j]=symbol;
  }
 }
 if (length==-1) {
  length=lmax;
 }

 	memset(charword,0,sizeof(charword));
 for (i = 0; i < strlen(string); i++)
 {
  symbol=string[i];
  if ((strchr(" `~!@#$%^&*()_+{}|:<>?/.,\][-	",symbol))|| (i==(strlen(string)-1)))
  {
	 if (i==(strlen(string)-1))
   {
	  charword[i-j]=symbol;
   }
   j=i+1;
   if (length==-1) {
   l=strlen(charword);
	if (l>lmax) {
	 lmax=l;
	}
   }
   else
   {
	if (strlen(charword)==length) {
	 printf("%s\n",charword);
	}
   }
	//printf("%s\n",charword1);
	//strcpy(charmax1,charword1);
	memset(charword,0,sizeof(charword));
  }
  else
  {
  charword[i-j]=symbol;
  }
 }
 if (length==-1) {
  length=lmax;
 }  */
 fflush(stdin);//waiting for the user
 getchar();
 return 0;
}

int search(char *string1, char *charmax1, char *charword1, char *symbol, int *length)
{
int i,j=0,l,lmax=0;
	memset(charword1,0,sizeof(charword1));
 for (i = 0; i < strlen(string1); i++)
 {
  *symbol=string1[i];
  if ((strchr(" `~!@#$%^&*()_+{}|:<>?/.,\][-	",*symbol))|| (i==(strlen(string1)-1)))
  {
	 if (i==(strlen(string1)-1))
   {
	  charword1[i-j]=*symbol;
   }
   j=i+1;
   if (*length==-1) {
   l=strlen(charword1);
	if (l>lmax) {
	 lmax=l;
	}
   }
   else
   {
	if (strlen(charword1)==*length) {
	 printf("%s\n",charword1);
	}
   }
	//printf("%s\n",charword1);
	//strcpy(charmax1,charword1);
	memset(charword1,0,sizeof(charword1));
  }
  else
  {
  charword1[i-j]=*symbol;
  }
 }
 if (*length==-1) {
  *length=lmax;
 }
}

