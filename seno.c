#include<stdio.h>

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
    int n, cont = 1;
    float x;
    double r = 0.0;
    printf("digite o valor de X:\n");
    scanf("%f",&x);
    printf("digite quantos termos da serie:\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i+=2){
        r += expo(-1, cont+1)*expo(x, i)/(float)fat(i);
        cont++;
    }
    printf("%f\n", r);
}