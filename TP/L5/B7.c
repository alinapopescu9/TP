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
void pop1()
{
	if (vf1 != -1)
		vf1--;
	else
		printf("stiva este goala")
}
void pop2()
{
	if (vf2 != -1)
		vf2--;
	else
		printf("stiva este goala")
}
int peek1()
{
	return st1[vf1];
}
int peek2()
{
	return st2[vf2];
}

void afisare()
{
	int i;
	for (i = vf1; i >= 0; i--)
		printf("%d", st1[i]);

	for (i = vf2; i >= 0; i--)
		printf("%d", st2[i]);
}
int verificare()
{
	int i;
	for (i = 0; i <= vf1 / 2; i++)
		if (st1[i] != st1[vf1 - i])
			return 0;
	return 1;
	for (i = 0; i <= vf2 / 2; i++)
		if (st2[i] != st2[vf2 - i])
			return 0;
	return 1;
}
int binar(int n)
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
	int n, nr;

	printf("n="); scanf("%d", &n);
	nr = binar(n);
	while (n)
	{
		push1(n % 10);
		n /= 10;
	}
	while (nr)
	{
		push2(nr % 10);
		nr /= 10;
	}
	afisare();
	if (verificare())
		printf("nr este palindrom\n");
	else
		printf("nu nu este palindrom\n");
	system("pause");
	return 0;
}