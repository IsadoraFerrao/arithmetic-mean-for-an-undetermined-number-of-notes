#include<stdio.h>

// 1. Crie um algoritmo que calcule a m�dia aritm�tica para um n�mero indeterminado de notas
//entradas. Admite-se a entrada de valores reais. Quando a nota for -1, deve-se parar a leitura de
//notas apresentando a m�dia dos valores lidos na tela. 

int main () {
	int total=0, quantNotas=0, nota=0;
	float media;
	
	while (nota!=-1)
		{ 
			printf("\n\n Ola usuario, digite suas notas\n\n Caso queira encerrar digite:-1 para encerrar\n\n", quantNotas+1);
			scanf("%d", &nota);
			
				if (nota >=0)
			{
				total=total+nota;
				quantNotas=quantNotas+1;
			}
		}
		
	if (quantNotas>0)
	
	{ // 
		media=total/quantNotas; // Calculo da media das notas digitadas pelo usuario
		printf("\n\n  Quantidade de notas digitadas = %d \n  Media das notas = %f \n", quantNotas, media);
	}
	
	else 
		printf("Ocorreu algum problema... digite os numeros corretamente \n\n  ATT A Diretoria \n\n");
}
	

