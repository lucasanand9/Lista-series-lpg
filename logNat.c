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

int main(){
    float k, r=0;
    scanf("%f", &k);

    for (int i = 1; i <= k; i++){
        r += expo(-1, i+1)/(float)i;
        printf("%lf\n", r);
    }
    
}