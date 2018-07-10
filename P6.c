//Nome: Rafael Daily Santos Martins
//Matrícula: 11721EEL001

#include <stdio.h>

float soma(int quant, float vet[])
{

	if(quant == 0)
		return 0;
	else
	{	
		float s;
    	s = soma (quant-1, vet);
    	if (vet[quant-1] > 0) 
			s = s + vet[quant-1];
    	return (s);
   }
}

int main()
{
	float num=0, vet[20], somatorio;
	float media;
	int i;
	for(i=0; i<20; i++)
		vet[i]=0;
	do
	{
		printf("Digite a quantidade de numeros: ");
		scanf("%f", &num);
		getchar();
	}while(num<5 && num>20);
	for(i=0; i<num; i++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &vet[i]);
		getchar();
	}
	somatorio = soma(num, vet);
	media = somatorio/num;
	printf("Somatorio: %f\nMedia: %f", somatorio, media);
	return 0;
}
