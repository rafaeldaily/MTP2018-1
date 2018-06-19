//Nome: Rafael Daily Santos Martins
//Matrícula: 11721EEL001
#include <stdio.h>

void octaldecimal(int oct[], int num)
{
	int x, y, i, dec=0, aux;
	x=num-1;
	for(i=0; i<num; i++)
	{
		aux=1;
		y=x;
		if(y==0)
			aux;
		else	
			while(y>0)
			{
				aux=aux*8;
				y--;
			}
		dec = dec + oct[i]*aux;
		x--;
	}
	printf("\nO numero digitado em decimal: %d", dec);
}
void printBits(int num) 
{
	int i, n=0, bits[256];
	if(num==0)
		printf("\nNumero em binario: 0");
	else
	{
		for(i=0; num/2!=0; i++)
		{
			bits[i] = num%2;
			num=num/2;
			n++;
		}
		printf("\nNumero em binario: 1");
		for(i=n-1; i>=0; i--)
			printf("%d", bits[i]);
	}
}
int main()
{
	int d, i, oct[1000], dec, hex, x;
	char bits[256];
	printf("Digite a opcao:\n\n\n");
	printf("1. Binario para Decimal\n2. Binario para Hexadecimal\n3. Hexadecimal para Decimal\n4. Hexadecimal para Binario\n5. Decimal para Binario\n");
	printf("6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Decimal para Octal\n\n");
	scanf("%d", &d);
	getchar();
	switch(d)
	{
		case 1: 													//Binario para decimal
			printf("Digite um binario: ");
			scanf ("%s", &bits);
			getchar();
			for(i=0, dec=0; bits[i]; i++) 
			{
				dec = dec*2 + (bits[i] - '0');
			}
			printf ("\nO numero digitado em decimal: %d", dec);
			break;
		case 2:														//Binario para hexadecimal
			printf("Digite um binario: ");
			scanf ("%s", &bits);
			getchar();
			for(i=0, dec=0; bits[i]; i++) 
			{
				dec = dec*2 + (bits[i] - '0');
			}
			printf ("\nO numero digitado em decimal: %x", dec);
			break;
		case 3:														//Hexadecimal para decimal
			printf("Digite um hexadecimal: ");
			scanf("%x", &hex);
			getchar();
			printf ("\nO numero digitado em decimal: %d", hex);
			break;
		case 4:														//Hexadecimal para binario
			printf("Digite um hexadecimal: ");
			scanf("%x", &hex);
			getchar();
			printf ("\nNumero auxiliar: %d", hex);
			printf ("\n\nDigite o numero acima: ");
			scanf ("%d", &dec);
			getchar();
			printBits(dec);
			break;
		case 5:														//Decimal para binario
			printf("Digite um decimal: ");
			scanf("%d", &dec);
			getchar();
			printBits(dec);
			break;
		case 6:														//Decimal para Hexadecimal
			printf("Digite um decimal: ");
			scanf("%d", &dec);
			getchar();
			printf("\nO numero digitado em hexadecimal: %x", dec);
			break;
		case 7:														//Octal para decimal
			printf("Digite o numero de algarismos para o octal: ");
			scanf("%d", &x);
			getchar();
			for (i = 0; i<x; i++)
			{	
				printf("\nDigite um algarismo: ");
				scanf("%d", &oct[i]);
			}
			octaldecimal(oct, x);
			break;
		case 8:														//Decimal para octal
			printf("Digite um decimal: ");
			scanf ("%d", &dec);
			getchar();
			printf ("\nO numero digitado em octal: %o", dec);
			break;
	}
	return 0;
}
