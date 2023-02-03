#include <stdio.h>
#include <locale.h>


void ordem_por_selecao (int num[], int tam){
	
	int i, j, min, aux;
	
	for(i = 0; i < tam; i++){
		min = i;
		for(j = (i + 1); j < tam; j++){
			if(num[j] > num[min]){
				min = j;
			}
		}
		if(i != min){
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
		}
	}
}


int main(){
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	int idade[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Informe a %dº idade: ", i + 1);
	    scanf("%d", &idade[i]);
   }


   ordem_por_selecao(idade, 5);
   for(i = 0; i < 5; i++){
   	
   	printf("\nEm ordem decrescente: %d\n", idade[i]);
   	
   }
	
	return 0;
	
}
