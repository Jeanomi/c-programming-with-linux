/*initializePoly() should receive as input a pointer to the first structure in an array of structures as well as in integer, indicating how many points can be stored in the array. Your job is to initialize these points in the following way: Using a for loop with i starting at 0, initialize the x-coordinate of the point at index i as -i, and the y-coordinate as i*i.*/

#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    struct point * polygon;
    int n;
    
    scanf("%d", &n);
    polygon = malloc(n * sizeof(struct point));
    
    initializePoly(polygon, n);
    printPoly(polygon, n);
    // Fill in your main function here

    free(polygon);
    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point * poly, int n){
    int i;
    for(i = 0; i < n; i++){
        poly[i].x = -i;
        poly[i].y = i*i;
    }
}

