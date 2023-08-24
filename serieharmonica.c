#include <stdio.h>

int main(){
    double b = 0, aux = 0,cont = 1;
    int a;
    scanf("%i", &a);
    while(cont <= a){
    b = (float)1.0/cont;
    aux += b;
    printf("%.2f\n", aux);
    cont++;
    }
}