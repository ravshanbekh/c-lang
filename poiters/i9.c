#include <stdio.h>

void qisqartir(int *a,int *b){
    for(int i=1;i<*a;i++){
        if(*a%i==0 && *b%i==0){
            *a=*a/i;
            *b=*b/i;
        }
    }
    
}

int main(){
    int a,b,c;
    printf("kasrni suratini kiriting: "); scanf("%d",&a);
    printf("kasrni maxrajini kiriting: ");scanf("%d",&b);
    printf("%d/%d",a,b);
    qisqartir(&a,&b);
    printf("\n%d/%d",a,b);
    
    
    return 0;
}