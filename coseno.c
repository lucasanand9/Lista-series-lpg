#include <stdio.h>

long int fat(int num){
    if (num == 0 || num == 1){
        return 1;
    }

    return num * fat(num-1);
    
}

double expo(double b,double e){
    double aux;
    if (e == 0){
        return 1;
    }
    if (e < 0){
        b = 1/b;
        aux = b;
        for (int i = 1; i < -1*e; i++){
            b *= aux;
        }
        return b;
    }
    aux = b;
    for (int i = 1; i < e; i++){
        b *= aux;
    }
    return b;
}
int main(){
    double x;   
    int k;
    printf("digite o valor de x:\n");
    scanf("%lf", &x);
    printf("Digite o numeros de termos:\n");
    scanf("%i", &k);
    double cos = 0;

    for (int i = 0; i < k; i++){
        cos += expo(-1, i)*expo(x,2*i)/fat(2*i);
    }
    printf("%f\n", cos);
}