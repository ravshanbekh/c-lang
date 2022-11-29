// pointer orqali sonlarni almashtirish
#include <stdio.h>
void almash(int *n1,int *k1){
    int c=*n1;
    *n1=*k1;
    *k1=c;
}

int main(){
    int n,k;
    printf("n= ");scanf("%d",&n);
    printf("k= ");scanf("%d",&k);
    almash(&n,&k);
    printf("n=%d\nk=%d",n,k);


}