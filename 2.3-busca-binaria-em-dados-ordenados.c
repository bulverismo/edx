#include<stdio.h>

int main(void) {

    int lista[] = {-10, -3, 2, 5, 8, 14, 77, 106, 759, 900}; /* lista ordenada */
    int n = 10;
    int item; 
    int chao, teto, meio, encontrou;
    
    printf("Por qual número você esta procurando? ");
    scanf("%d", &item);
    chao = 0;
    teto = n-1;
    encontrou = 0;
    
    while (!encontrou && (chao <= teto)) {
        meio = (chao + teto)/2; // indice do meio
        if (item == lista[meio]) {
            encontrou = 1;  // encontrou item!
        } else if (item<lista[meio]) {
            teto = meio-1; // transforme o teto no meio
        } else {
            chao = meio + 1; // transforme o chao no meio
        }
    }
    
    if (!encontrou) {
        printf("Número %d não foi encontrado na lista. \n", item);
    } else {
        printf("Número %d foi encontrado no índice %d da lista.\n", item, meio);
    }
    
	return 0;
}
