#include <stdio.h>
void print_kvadrat(int *adres ){
     *adres=*adres/10 +  *adres%10*10;
}

int main(){
    int n;
    printf("2 xonali son kiriting: ");scanf("%d",&n);
    if(n<10 || n>99){
        printf("2 xonali son kiritmadingiz!");
    }else{
        int *adres=&n;
        print_kvadrat(adres);
        printf("%d",n);
    }


}