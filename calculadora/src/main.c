#include <stdio.h>
#include "math.h"

int main(){
	int x, y, op;

	printf("O que voce deseja fazer?\n");
	printf("1.Soma 2.Subtracao 3.Multiplicacao 4.Divisao 5.Sair\n");
	scanf("%d", &op);

	while(op!=5){
		if((op >= 1) && (op <= 5)){
			printf("Digite o primeiro valor: ");
			scanf("%d", &x);
			printf("Digite o segundo valor: ");
			scanf("%d", &y);
		}

		switch (op){
			case 1:
				printf("Resultado: %d\n", soma(x, y));
			break;
			case 2: 
				printf("Resultado: %d\n", subtracao(x, y));
			break;
			case 3:
				printf("Resultado: %d\n", multiplica(x, y));
			break;
			case 4:
				printf("Resultado: %d\n", divisao(x, y));
			break;
			default:
				printf("Opcao invalida\n");
	}
	

	printf("O que voce deseja fazer?\n");
	printf("1.Soma 2.Subtracao 3.Multiplicacao 4.Divisao 5.Sair\n");
	scanf("%d", &op);
	}
	
	return 0;
}
