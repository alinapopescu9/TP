#include<stdio.h>
#include<stdlib.h>

/*
5. Sa se verifice daca operatia BINARA de "SAU" ("OR") aplicata pe un sir de “N” numere intregi citit de la tastatura rezulta un numar par sau impar. NU aveti voie sa folositi “%”, impartire cu rest / modulo.

Help: A se consulta tabelul de adevar in cadrul operatilor de tip binary


*/
int main()
{
	int x = 0, n, i, a[10];
	printf("n=");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	printf("a=");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	x = a[0];
	for (i = 1; i < n; i++)
		x = (x | a[i]);
	printf("x="); scanf("%d", &x);
	printf("\n");

	if (1 == (1 & (x >> 0)))
		printf("numaru impar\n");
	else printf("numar par\n");
	return 0;
}