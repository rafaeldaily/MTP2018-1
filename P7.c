//Nome: Rafael Daily Santos Martins
//Matr�cula: 11721EEL001

#include <stdio.h>

int a (int m, int n)
{
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		return a(m-1, 1);
	else if(m>0 && n>0)
		return a(m-1, a(m, n-1));
}

int main ()
{
	int m, n;
	printf("Digite m: ");
	scanf("%d", &m);
	printf("\nDigite n: ");
	scanf("%d", &n);
	printf("%d", a(m, n));
	return 0;
}
