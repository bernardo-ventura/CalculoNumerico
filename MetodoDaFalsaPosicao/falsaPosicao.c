#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x){
    return x*(log10(x)) - 1;
}

int main(){
    double a,b,p,tolerancia;
    tolerancia = pow(10,-7);
    int i=1;
    a = 2.0;
    b = 3.0;

    if(f(a) * f(b) < 0) {
        while(fabs(b-a) > tolerancia){
            p = (a*f(b) - b*f(a)) / (f(b) - f(a));

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
    }else{
        printf("Não existe raiz nesse intervalo\n");
        exit(-1);
    }
    printf("A raiz é %f\n",a);
    return 0;
}
