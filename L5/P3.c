#include <stdio.h>
#include <stdlib.h>
int st[100], st1[100], vf = -1, vf1 = -1;
void push(int  a)
{	
	st[++vf] = a;
}
void pop()
{	
	if (vf != -1)		
		vf--;	
	else		
		printf("stiva este goala")
}
int peek()
{	
	return st[vf];
}
int main()
{	
	int i, n, nr = 0, a, aux, k;	
	printf("Nr de elemente: ");	
	scanf("%d", &n);	
	for (i = 0; i < n; i++)	
	{		
		printf("el %d este:", i + 1);		
		scanf("%d", &a);		
		aux = a;		
		vf = -1;		
		k = 1;		
		while (aux)		
		{			
			push(aux % 10);			
			aux = aux / 10;		
		}		
		aux = a;		
		while (aux)		
		{			
			if (aux % 10 != peek())				
				k = 0;			
			aux = aux / 10;			
			vf--;		
		}		
		if (k == 1)		
		{			
			printf("palindorm\n");			
			push(a);			
			nr = nr + 1;		
		}		
		else			
			printf("nu este palindorm\n"); 	
	}	
	printf("stiva: \n");	
	for (i = 0; i < nr; i++)		
		printf("el %d este: %d\n", i + 1, st1[i]); 	
	system("pause");	
	return 0;
}