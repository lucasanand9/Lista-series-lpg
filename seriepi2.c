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
    int k, aux = 0, div;
    scanf("%i", &k);
    float pi = 3;

    for (int i = 3; i < k+3; i+= 2){
        aux++;
        div = (i-1)*i*(i+1);
        pi += 4*expo(-1, aux+1)/div;
    }
    
    printf("%.2f\n", pi);

}