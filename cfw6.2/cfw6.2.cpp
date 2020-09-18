#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char name[100];
int c;
void x() {
	
	for (int j = c; j >= 1; j--)
	{
		for (int z = c; z >= 1; z--)
		{

			printf("%c", name[j]);
		}
		printf("\n");
	}
} 

int main() {
	printf("How many letters of your name  : ");
	scanf("%d", &c);
	for (int i = 1; i <= c; i++)
	{
		printf("letters %d of your name  : ", i);
		scanf("%s", &name[i]);

	}
	x();
	return 0;
}
