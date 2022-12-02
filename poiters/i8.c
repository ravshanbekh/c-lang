#include <stdio.h>

void tartib(int *a,int *b,int *c ){
    int k;
    if(*c<*b && *b<*a){
        k=*a;
        *a=*c;
        *c=k;
    }else if(*b<*c && *c<*a){
        k=*c;
        *c=*a;
        *a=*b;
        *b=k;
    }else if(*a<*c && *c<*b){
        k=*c;
        *c=*b;
        *b=k;
    }else if(*c<*a && *a<*b){
        k=*c;
        *c=*b;
        *b=*a;
        *a=k;
    }else if(*b<*a && *a<*c){
        k=*b;
        *b=*a;
        *a=k;
    }

}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d",a,b,c);
    tartib(&a,&b,&c);
    printf("\n%d %d %d",a,b,c);
    
    return 0;
}