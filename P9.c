//Nome: Rafael Daily Santos Martins
//Matrícula: 11721EEL001

#include <stdio.h>

int main()
{
	int x=1, prod;
	struct Dimensoes
	{
		float largura;
		float profundidade;
		float altura;
	};
	struct Dimensoes dimensoes1, dimensoes2;
	struct Produto
	{
		char nome[64];
		float preco;
		struct Dimensoes dimensoes;
	};
	struct Produto produto1, produto2;
	produto1.nome[0] = '\0';
	produto2.nome[0] = '\0';
	while (x == 1 || x == 2)
	{
	    printf("1 - Cadastro\n\n2- Consulta\n\n3 - Sair\n\n");
        scanf("%d", &x);
        getchar();
        if(x == 3)
            break;
	    printf("\nEscolha entre o produto 1 ou 2\n\n");
	    scanf("%d", &prod);
	    getchar();
	    if(x == 1 )
	    {
	    	if(prod == 1)
	    	{
		    	printf("\nDigite o nome do produto: \n\n");
		        scanf("%s", produto1.nome);
		        getchar();
		        printf("\nDigite o preco do produto: \n\n");
		        scanf("%f", &produto1.preco);
		        getchar();
				printf("\nDigite a largura, a profundidade e a altura, respectivamente: \n\n");
		        scanf("%f %f %f", &dimensoes1.largura, &dimensoes1.profundidade, &dimensoes1.altura);
		        getchar();
			}
		    else if(prod == 2)
		    {
		 	    printf("\nDigite o nome do produto: \n\n");
		        scanf("%s", produto2.nome);
		        getchar();
				printf("\nDigite o preco do produto: \n\n");
		        scanf("%f", &produto2.preco);
		        getchar();
				printf("\nDigite a largura, a profundidade e a altura, respectivamente: \n\n");
		        getchar();
				scanf("%f %f %f", &dimensoes2.largura, &dimensoes2.profundidade, &dimensoes2.altura);
		    }
		
	    }
	    else if(x == 2)
	    {
		    if(prod == 1)
		    {
			    if(produto1.nome[0] == '\0')
			        printf("\n\nProduto nao cadastrado!\n\n");
			    else 
			        printf("\n\n%s , R$ %f, L: %.2fm x P: %.2fm x A: %.2fm\n\n", produto1.nome, produto1.preco, dimensoes1.largura, dimensoes1.profundidade, dimensoes1.altura);
		    }
		    if(prod == 2)
		    {
		    	if(produto2.nome[0] == '\0')
		    	    printf("\n\nProduto nao cadastrado!\n\n");
		        else
		            printf("\n\n%s , R$ %f, L: %.2fm x P: %.2fm x A: %.2fm\n\n", produto2.nome, produto2.preco, dimensoes2.largura, dimensoes2.profundidade, dimensoes2.altura);
			}
	    }
    }
    return 0;
}
