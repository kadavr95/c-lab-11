//������������ ������ 10. ������� 1. ������� ������� (T02-01c). Dimini Inc. (c)2013
#include <stdio.h>//����������� ���������� �����/������
#include <string.h>//����������� ���������� ������ �� ��������

int search(char *string, int *length); //�������� �������

int main(void)//������� �������
{
	int length=-1;//����������� ����������
	char string [80], charmax[80];
	printf("Enter string: ");//������ �����
	gets(string);//����������� ������
	search(string,&length);//����������� ������������ ����� �����
	printf("Long word(s):");//�������, �������������� �����
	search(string,&length);//����� � ����� ���� � ������������ ������
	fflush(stdin);//�������� �������� ������������
	getchar();
	return 0;
}

int search(char *string, int *length)//������� ������ �� �������
{
	int i,j=0,l,lmax=0;//����������� ����������
	char string1[80],charword1[80],symbol;
	memset(charword1,0,sizeof(charword1));//������� ���������� ��� �������� �����
	strcpy(string1,string);//����� ������ � ��������� ����������
	for (i = 0; i < strlen(string1); i++)//���� ������� �������� ������
	{
		symbol=string1[i];//���������� �������
		if ((strchr(" `~!@#$%^&*()_+{}|:<>?/.,\][-	",symbol))|| (i==(strlen(string1)-1)))//������� ����� ����� ��� ����� ������
		{
			if (i==(strlen(string1)-1))//�������� � ������ ����� ������
			{
				charword1[i-j]=symbol;//���������� ���������� �����
			}
			j=i+1;//��������� ���������� ���������� �� ����� ���������� ������� � �����
			if (*length==-1)//��������, ���� �� �������� ������������ �����
			{
				l=strlen(charword1);//����������� ����� �����
				if (l>lmax)//������� ������ ������������� ��������
				{
					lmax=l;//������������ ������ ������������� ��������
				}
			}
			else//��������, ���� �������� ������������ �����
			{
				if (strlen(charword1)==*length)//�������� ��������� ����� ����� ������������� ��������
				{
					printf(" %s",charword1);//����� �����
				}
			}
			memset(charword1,0,sizeof(charword1));//����� ���������� �� ������
		}
		else//��������, ���� ����� ��� �� �����������
		{
			charword1[i-j]=symbol;//������ ������� � ���������� ��� �����
		}
	}
	if (*length==-1)//��������, ���� �� �������� ������������ �����
	{
		*length=lmax;//�������� ������������ ����� � ��������
	}
}

