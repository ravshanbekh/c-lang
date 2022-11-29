#include <stdio.h>
void print_adres(int n){
    int *adres=&n;
    printf("%p",adres);
}

int main(){
    int n;
    printf("n= ");scanf("%d",&n);
    print_adres(n);



}