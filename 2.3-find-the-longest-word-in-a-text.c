#include <stdio.h>
int main(void) {
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[101];

    int max=0;

    scanf("%d", &nbWords);

    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        l = 0;
        while(word[l]!='\0'){
            l++;
        }
        if (l>max)
          max=l;
    }
    printf("%d\n",max);
    return 0;   
}
