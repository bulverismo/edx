#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};
void printPoint(struct point pt);
void readPoint(struct point * ptr, int *);
int main(void) {
    //! showMemory(start=65520)
    struct point z;
    int *num = (int*) malloc (sizeof(int));
    *num=10;
    readPoint(&z,num);
    printPoint(z);
	return 0;
}

void readPoint(struct point * ptr, int *i) {
    printf("\nEnter a new point: \n");
    printf("x-coordinate: ");
    scanf("%d", &ptr->x);
    scanf("%d", i);
    printf("y-coordinate: ");
    scanf("%d", &ptr->y);
}

void printPoint(struct point pt){
    printf("(%d, %d)\n", pt.x, pt.y);
}
