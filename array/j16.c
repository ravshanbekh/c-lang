//1-manfiy elementigacha bolgan elementlar yig'indisi
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_numb(int array[],int n){
    for(int i=0;i<n;i++){
        array[i]=-10+rand()%21;
    }
}
void output(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    puts(" ");
}
void summ(int array[],int n){
    int summ=0;
    for(int i=0;i<n;i++){
        if(array[i]>=0){
            summ+=array[i];
            printf("%d ",array[i]);
        }else{break;}
    }
    printf("\n%d",summ);
}
int main(){
    int n;
    scanf("%d",&n);
    int numb[n];
    srand(time(0));
    fill_numb(numb,n);
    output(numb,n);
    summ(numb,n);


    return 0;
}