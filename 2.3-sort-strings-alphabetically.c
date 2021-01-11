/*
 * Veja qual string vem antes, seguindo a tabela ascii
 * perceba que:
 *
 * strings mais curtas vem antes das mais longas quando estas 
 * tem prefixos iguais
 *
 * letra minuscula vem depois de maiuscula quando são iguais
 * pois em ascii A=65 e a=97
 */

#include <stdio.h>

int main(void) {
    char word1[50];
    char word2[50];
    int i = 0;
    
    printf("Please enter a word: ");
    scanf("%s", word1);
    printf("And another: ");
    scanf("%s", word2);
    // Find first letter in which words differ
    while (word1[i]!='\0' && word2[i]!= '\0' && word1[i] == word2[i]) 
        i++;
    if (word1[i] < word2[i])
        printf("%s comes before %s in the alphabet.\n", word1, word2);
    else if (word1[i]>word2[i])
        printf("%s comes after %s in the alphabet.\n", word1, word2);
    else printf("You entered the same word, %s, twice.\n", word1);
        
    return 0;
}
