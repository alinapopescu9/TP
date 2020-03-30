#include <stdio.h>
#include <stdlib.h>
int st1[100], st2[100], vf1 = -1, vf2 = -1;
void push(int  a)
{	
	st1[++vf1] = a;
}
void pop()
{	
	if (vf1 != -1)
		vf1--;
	else
		printf("stiva este goala");
}
int peek()
{	
	return st1[vf];
}
int main()
{	
	int i, n, nr = 0, inv, k;	
	printf("Nr de elemente: ");	
	scanf("%d", &n);	
	for (i = 0; i < n; i++)
	{
		inv = i + 1;
		k = 1;
		
		while (inv)
		{
			push(inv % 10);
			inv = inv / 10;
			if (inv % 10 != peek())
				k = 0;
			inv = inv / 10;
			vf--;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (k == 1)
		{
			printf("palindorm\n");
			push(inv);
			nr = nr + 1;
		}
		else
			printf("nu este palindorm\n");
	}
	printf("stiva:\n");	
	for (i = 0; i < nr; i++)		
		printf("%d\n", st2[i]); 	
	system("pause");	
	return 0;
}