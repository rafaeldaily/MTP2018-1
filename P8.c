//Nome: Rafael Daily Santos Martins
//Matrícula: 11721EEL001

#include <stdio.h>
#include <stdlib.h>
#define K 100

void gera_numeros(float * vetor, int tam) 
{
	int i;
	float num;
	for(i = 0; i < tam; i++)
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float reduce(float * pini, float * pfim,
		float (*funcao)(float, float)) 
{
	return (pini == pfim)? 1 :
		(*funcao)(*pini, reduce(pini+1, pfim, funcao));
}
float soma(float a, float b) 
{
	return a+b;
}
float produto(float a, float b) 
{
	return a*b;
}

int main ()
{
	srand(123456);
	float vetor[K];
	int i, d;
	gera_numeros(vetor, K);
	printf("\nDigite 1 para calcular o Somatorio e 2 para calcular o Produtorio: ");
	scanf("%d", &i);
	getchar();
	if(i==1)
		printf("\nSomatorio = %f", reduce(vetor, vetor+K, soma)-1);
	else if(i==2)
		printf("\nProdutorio = %f", reduce(vetor, vetor+K, produto));
	else
		printf("\nOpcao invalida!");
	return 0;
}
