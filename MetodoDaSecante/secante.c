#include <stdio.h>
#include <math.h>

double f(double x){
    return x*(log10(x)) - 1;
}

int main(){
    double a,b,k,tolerancia;
    tolerancia = pow(10,-7);
    int i= 1;
    a = 2;
    b = 3;

    while(fabs(f(k))>tolerancia){
        k = ( a*f(b) - b*f(a) ) / (f(b) - f(a));
        a = b;
        b = k;
        printf("Iteração: %d\n csi: %f \n f(csi): %f\n",i,a,f(a));
        i++;
    }

    printf("A raiz é %f\n",k);
    return 0;
}