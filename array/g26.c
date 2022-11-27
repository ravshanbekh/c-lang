//musbatlar bir tomonga manfiylar bir tomonga 
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
void joylash(int array[],int n){
    int numb[n],index=0,c=0;
    for(int i=0;i<n;i++){
        if(array[i]>0){
            c++;
            numb[index++]=array[i];
            }
    }
    for(int i=0;i<n;i++){
        if(array[i]<0){
            numb[index++]=array[i];
            }
    }
    for(int i=0;i<n;i++){
        if(array[i]==0){
            numb[index++]=array[i];
            }
    }
    output(numb,n);
    printf("musbatlar soni %d ta",c);
}
int main(){
    int n;
    scanf("%d",&n);
    int numb[n];
    srand(time(0));
    fill_numb(numb,n);
    output(numb,n);
    joylash(numb,n);


    return 0;
}