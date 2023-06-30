#include<stdio.h>

int main(){
	
	enum produto {pe_de_moleque, cocada_baiana} doces;
	printf("*********LISTA DE PRODUTOS********* \n\n");
	printf(" [1]      Pe de Moleque \n [2]      Cocada Baiana \n [3]      Queijadinha Cremosa \n [4]      Arroz Doce \n [5]      Doce de Amendoim \n [6]      Curau de Milho \n [7]      Brigadeiro de Churros \n [8]      Bolo de Amendoim \n [9]      Brigadeiro de maca \n [10]     Bolo de Milho  \n\n");
	printf(" Digite o numero do produto para saber seu codigo e preco $: ");
	scanf("%d", &doces)	;
	
	while (doces > 2){
		printf("\n Produto nao cadastrado, digite novamente: \n \n");
		scanf("  %d", &doces);		
	}
	
	if (doces == 1){
		printf("\n Pe de Moleque - Codigo (13205) - R$0,20 ");
	}
	if (doces == 2) {
		printf("\n Cocada Baiana - Codigo (15202) - R$0,50 ");
	}
	if (doces > 2){
		printf("\n Produto nao cadastrado");
	}	
}
