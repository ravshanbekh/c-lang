#include <stdio.h>
#include <string.h>

typedef struct{
    char manzil[32];
    int raqam;
    char tur[16];
}aero;

void kiritish(aero list[],int n){
    for(int i=0;i<n;i++){
        printf("Parvoz manzili: ");scanf(" %s",list[i].manzil);
        printf("Parvoz raqami: ");scanf("%d",&list[i].raqam);
        printf("Samalyot turi: ");scanf("%s",list[i].tur);
    }
}

void output(aero list[],int n){
    for(int i=0;i<n;i++){
        puts(" ");
        printf("Parvoz manzili: %s\n",list[i].manzil);
        printf("Parvoz raqami: %d\n",list[i].raqam);
        printf("Samalyot turi: %s\n",list[i].tur);
    }
}

void user(aero list[],int n){
    int k,c=0;
    printf("reys raqamini kiriting: ");scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(k==list[i].raqam){
            c++;
            puts(" ");
            printf("Parvoz manzili: %s\n",list[i].manzil);
            printf("Parvoz raqami: %d\n",list[i].raqam);
            printf("Samalyot turi: %s\n",list[i].tur);
        }
    }
    if(c==0){
        printf("bunday reyslar topilmadi!");
    }
}

int main(){
    int n;
    printf("n=");scanf("%d",&n);
    aero Airport[n];
    kiritish(Airport,n);
    output(Airport,n);
    user(Airport,n);
}