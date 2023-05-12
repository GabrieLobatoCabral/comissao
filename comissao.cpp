#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char corretor1[100], corretor2[100], corretor3[100];
	char porcentagem1,porcentagem2,porcentagem3;
	float venda1,venda2,venda3;
	float comissao1, comissao2, comissao3;
	
	printf("-----------------------------------------------------------------------\n");
  printf("-                                                                     -\n");
  printf("-                 Programa Para Calcular Comissão                     -\n");
  printf("-                                                                     -\n");
  printf("-----------------------------------------------------------------------\n");
  printf("-                  vendas: >R$30.000 = 7 porcento                     -\n");
  printf("-           vendas: >R$30.000 e <R$50.000 = 9.5 porcento              -\n");
  printf("-                vendas: >=R$50.000,00 = 12 porcento                  -\n");
  printf("-----------------------------------------------------------------------\n");
  
  printf ("\n\nNome do primeiro corretor: ");
	scanf("%s", corretor1);
	
	printf ("Total de venda: ");
	scanf ("%f",&venda1);
	
	printf ("\n\nNome do segundo corretor: ");
	scanf("%s", corretor2);
	
	printf ("Total de venda: ");
	scanf ("%f",&venda2);
	
	printf ("\n\nNome do terceiro corretor: ");
	scanf("%s", corretor3);
	
	printf ("Total de venda: ");
	scanf ("%f",&venda3);
	
	/* Corretor 1 */
	if (venda1 > 0){
	
	if (venda1 >= 50000){
		porcentagem1 = 12;
		comissao1 = venda1*1.12;
	}
	
	else if (venda1 > 30000 && venda1 < 50000){
		porcentagem1 = 9.5;
		comissao1 = venda1*1.095;
	}
	
	else{
		porcentagem1 = 7;
		comissao1 = venda1*1.07;
	}
		
	}
	
	/* Corretor 2 */
	
	if (venda2 > 0){
		
	if (venda2 >= 50000){
		porcentagem2 = 12;
		comissao2 = venda2*1.12;
	}
	
	else if (venda2 > 30000 && venda2 < 50000){
		porcentagem2 = 9.5;
		comissao2 = venda2*1.095;
	}
	
	else{
		porcentagem2 = 7;
		comissao2 = venda2*1.07;
	}
		
	}
	
	/* Corretor 3 */
	if (venda3 > 0){
		
	if (venda3 >= 50000){
		porcentagem3 = 12;
		comissao3 = venda3*1.12;
	}
	
	else if (venda3 > 30000 && venda3 < 50000){
		porcentagem3 = 9.5;
		comissao3 = venda3*1.095;
	}
	
	else{
		porcentagem3 = 7;
		comissao3 = venda3*1.07;
	}
		
	}
	
	printf ("---------------------------------------\nVendedor: %s\nVendas: R$ %.2f \nComissão: %d porcento\nTotal: R$ %.2f\n---------------------------------------\n\n",corretor1,venda1,porcentagem1,comissao1);
	
	printf ("---------------------------------------\nVendedor: %s\nVendas: R$ %.2f \nComissão: %d porcento\nTotal: R$ %.2f\n---------------------------------------\n\n",corretor2,venda2,porcentagem2,comissao2);
	
	printf ("---------------------------------------\nVendedor: %s\nVendas: R$ %.2f \nComissão: %d porcento\nTotal: R$ %.2f\n---------------------------------------\n\n",corretor3,venda3,porcentagem3,comissao3);
	
	return 0;
}
