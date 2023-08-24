#include <stdio.h>

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

int is_primo(int num){
    if (num == 1 || num == 0){
        return 0;
    }
    for (int i = 2; i < num/2; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int k;
    double pi = 0;
    int exp = 0;
    scanf("%i", &k);

    for (int i = 1; i <= k; i+=2){
            exp++;
            pi +=4*expo(-1, exp+1)/i;            
    }

    printf("%.2f\n", pi);
}