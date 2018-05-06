//Nome: Rafael Daily Santos Martins
//Matrícula: 11721EEL001
#include <stdio.h>

int main()
{
	int i=0, cum=0;
	char str[256];
	scanf("%s", str);
	getchar();
	while(str[i])
	{
		if(str[i]>=48 && str[i]<=57)
		{
			str[i]=str[i]-'0';
			cum=cum*10+str[i];
		}
		i++;
	}
	printf("\nO numero que vc digitou: %d", cum);
	getch();
	return 0;
}
