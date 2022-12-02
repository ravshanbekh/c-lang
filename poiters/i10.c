#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool kvadrat(int a){
    for (int i=1;i*i<=a;i++){
        if(i*i==a){
            return true;
        }
    }
    return false;
}

int main(){
    int a;
    printf("a="); scanf("%d",&a);
    printf("%d",kvadrat(a));
    
    
    return 0;
}