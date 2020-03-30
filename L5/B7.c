#include <stdio.h>
#include <stdlib.h>

int st1[100], st2[100], vf1 = -1, vf2 = -1;

void push1(int a)
{
	st1[++vf1] = a;
}

void push2(int a)
{
	st2[++vf2] = a;
}
void pop()
{
	if ((vf1 != -1)&&(vf2 != -1))
	{
		vf1--;
		vf2--;
	}
	else
		printf("stiva este goala");
}
int peek1()
{
	return st1[vf1];
}
int peek2()
{
	return st2[vf2];
}

int nr_binar(int n)
{
	int nr = 0, p = 1;
	while (n)
	{
		nr += (n % 2)*p;
		p *= 10;
		n /= 2;
	}
	return nr;
}

int main()
{
	int n, nr,i;

	printf("n="); scanf("%d", &n);
	nr = nr_binar(n);
	while ((n!=0) && (nr!=0))
	{
		push1(n % 10);
		n /= 10;
		push2(nr % 10);
		nr /= 10;
	}
	for (i = vf1; i >= 0; i--)
		printf("%d", st1[i]);
	for (i = vf2; i >= 0; i--)
		printf("%d", st2[i]);
	
	if ((st1[i] != st1[vf1 - i]) && (st2[i] != st2[vf2 - i]))
		printf("nr este palindrom\n");
	else
		printf("nr nu este palindrom\n");
	system("pause");
	return 0;
}