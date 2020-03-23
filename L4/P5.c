#include<stdio.h>
#include<stdlib.h>

int main()
{
	//daca incrementam/decrementam vectorul care ia adresa indexului 0 al vectorului v, vom merge cu o pozitie in fata/spate in vector.
	//in cazul pointerului oarecare, incrementarea/decrementarea sa 
	int *p,*p_index,v[100],i,n,x=5;
	printf("\nn=");
	scanf("%d",&n);
	printf("\nDati vectorul:");
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	p=&x;
	p_index=&v;
	printf("\nElementele vectorului sunt:\n ");
	for (int i = 0; i < n; i++)
		printf("%d ",v[i]);

	printf("\np+1=%d",*(p++));
	printf("\np-1=%d",* (p--));

	printf("\n%d",*(p_index+1));
	printf("Daca incrementam/decrementam pointerul care ia adresa index-ului 0 al unui vector oarecare, vom parcurge vectorul cu x pozitii in fata/spate(depinde de cat am incrementat/decrementat)\n");
	printf("Daca incrementam/decrementam pointerul care ia o adresa oarecare, acesta va modifica doar valoarea sa.\n");
	return 0;
}
