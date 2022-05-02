#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
    return pow(x,2) - 5;
}

int main(){
    float a, b, p, tolerancia;
    a = 2.0;
    b = 3.0;
    
    float funcA = f(a);
    float funcB = f(b);

    tolerancia = pow(10,-5);

    if(funcA * funcB < 0) {
        while(fabs(b-a) > tolerancia){
            p = (a + b)/2;
            float funcP = f(p);
            
            if(funcP == 0){
                printf("A raiz é %f\n",p);
                break;
            }else{
                if(funcA * funcP < 0){
                    b = p;
                }else{
                    a = p;
                }
            }
        }
    }else{
        printf("Não existe raiz nesse intervalo, pois f(a) e f(b) possuem o mesmo sinal\n");
    }
    printf("A raiz é %f\n", a);
    return 0;
}