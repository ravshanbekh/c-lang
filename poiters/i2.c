#include <stdio.h>
void print_kvadrat(int *adres ){
     *adres=*adres * *adres;
}

int main(){
    int n;
    printf("n= ");scanf("%d",&n);
    int *adres=&n;
    print_kvadrat(adres);
    printf("n=%d",n);



}