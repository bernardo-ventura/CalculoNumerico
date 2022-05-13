#include <stdio.h>
#include <math.h>

//Função do item 1
 double f(double x){
     return x*(log10(x)) - 1;
 }

// Função do item 3
// double f(double x){
//     return pow(x,3) - 2*x + 2;
// }

//derivada numérica de f
double dnf(double x){
    double h = pow(10,-6);
    return (f(x+h) - f(x))/h;
}

int main(){
    double a,tolerancia;
    int i = 1;
    tolerancia = pow(10,-7);
    a = 1;

    while(fabs(f(a))>tolerancia){
        
        // modificação número 1: com f'(x0) que é igual a dnf(1)
        // a = a - (f(a)/dnf(1));

        // MNR original
        a = a - (f(a)/dnf(a));
        
        printf("Iteração: %d\n csi: %f \n f(csi): %f\n",i,a,f(a));
        i++;
    }    
    printf("A raiz é %f\n",a);
    return 0;
}