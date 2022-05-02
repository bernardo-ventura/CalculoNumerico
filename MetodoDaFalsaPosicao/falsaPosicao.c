#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
    return pow(x,2) - 5;
}

int main(){
    float a,b,p,tolerancia;
    tolerancia = pow(10,-5);

    a = 2.0;
    b = 3.0;

    if(f(a) * f(b) < 0) {
        while(fabs(b-a) > tolerancia){
            p = (a*f(b) - b*f(a)) / (f(b) - f(a));

            if(f(p) == 0){
                printf("A raiz é %f\n",p);
                break;
            }else{
                if(f(a) * f(p) < 0){
                    b = p;
                }else{
                    a = p;
                }
            }    
        }
    }else{
        printf("Não existe raiz nesse intervalo\n");
    }
    printf("A raiz é %f\n",a);
    return 0;
}
