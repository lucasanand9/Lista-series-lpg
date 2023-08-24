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
    int x, k;
    scanf("%i %i", &x, &k);
    float t = 0;
    for (int i = 0; i < k; i++){
        t += (float)expo(x,i)/fat(i);
    }
    
    printf("%f\n", t);
}