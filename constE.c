#include <stdio.h>


long int fat(int num){
    if (num == 0 || num == 1){
        return 1;
    }

    return num * fat(num-1);
    
}

int main(){
    int k;
    scanf("%i", &k);
    float e = 0;
    for (int i = 0; i < k; i++){
        e += (float)1/(float)fat(i);
    }
    
    printf("%.2f\n", e);
}