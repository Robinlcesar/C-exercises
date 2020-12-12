#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C, raiz, r1, r2;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    if( A == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    raiz = (B*B)-(4*A*C);
    if (raiz<0){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    r1 = -(B-sqrt(raiz))/(2*A);
    r2 = -(B+sqrt(raiz))/(2*A);
    
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
    return 0;
}