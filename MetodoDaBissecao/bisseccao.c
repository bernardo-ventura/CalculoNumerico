#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x){
    return x*(log10(x)) - 1;
}

int main(){
    double a, b, p, tolerancia;
    int i=1;
    a = 2.0;
    b = 3.0;

    tolerancia = pow(10,-7);

    if(f(a) * f(b) < 0) {
        while(fabs(a-b) > tolerancia){
            p = (a + b)/2;
            
            if(f(p) == 0){
                printf("A raiz é %f\n",p);
                exit(-1);
            }else{
                if(f(a) * f(p) < 0){
                    b = p;
                }else{
                    a = p;
                }
            }
            printf("Iteração: %d\n csi: %f \n f(csi): %f\n",i,a,f(a));
            i++;
        }
        printf("Iteração: %d\n csi: %f \n f(csi): %f\n",i,a,f(a));
        i++;
    }else{
        printf("Não existe raiz nesse intervalo, pois f(a) e f(b) possuem o mesmo sinal\n");
        exit(-1);
    }
    printf("A raiz é %f\n",p);
    return 0;
}