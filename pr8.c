#include<stdio.h>

void cube(int p, int d) {
    int a[p][d];
    int b,c;
    
    for (b = 0; b < p; b++) {
        for (c = 0; c < d; c++) {
            printf("a[%d][%d] : ", b, c);
            scanf("%d", &a[b][c]);
        }
    }

    int *prerin;
    for (b = 0; b < p; b++) {
        for (c = 0; c < d; c++) {
            a[b][c] = a[b][c] * a[b][c] * a[b][c];
            prerin=&a[b][c];
            printf("%d\n", *prerin);
        }
    }
}
    
 main() {
    int p, d;
    printf("Enter the number of column: ");
    scanf("%d", &d);
    printf("Enter the number of row: ");
    scanf("%d", &p);

    cube(p, d);

}
