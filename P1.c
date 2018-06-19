//Nome: Rafael Daily Santos Martins
//Matrícula: 11721EEL001
#include <stdio.h>

int main()
{
	int estado=0, i, n;
	char bits[256];
	do
	{
		n=0;
		scanf("%s", bits);
		for(i=0; bits[i]!='\0'; i++)
		{
			if(bits[i]!='0'&&bits[i]!='1')
				n++;
		}
	}while(n!=0);
	i=0;
	while(bits[i] !='\0')
	{
		if(estado==0 && bits[i] == '0')
			estado=0;
		else if(estado==0 && bits[i] == '1') 
			estado=1;
		else if(estado==1 && bits[i] == '0')
			estado=2;
		else if(estado==1 && bits[i] == '1')
			estado=0;
		else if(estado==2 && bits[i] == '0')
			estado=1;
		else if(estado==2 && bits[i] == '1')
			estado=2;
		i++;
	}
	printf("\n%s", bits);
	if(estado==0)
		printf(" eh multiplo de 3");
	if(estado==1||estado==2)
		printf(" nao eh");
	return 0;
}
