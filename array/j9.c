#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_numb(int array[],int n){
    for(int i=0;i<n;i++){
        array[i]=-5+rand()%31;
    }
}
void output(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    puts(" ");
}
void change_index(int array[],int n,int k){
    int array1[k];
    for(int i=0;i<k;i++){
            array1[i]=array[i];
        
    }
    for(int j=0;j<n-k;j++){
        array[j]=array[j+k];
    }
    for(int i=0;i<k;i++){
        array[n-i-1]=array1[k-i-1];
    }
    
}
int main() {
    int n,k;
    printf("o'lchamni kirit:");scanf("%d",&n);
    printf("nechta index surilsin: ");scanf("%d",&k);
    srand(time(0));
    int numb[n];
    fill_numb(numb,n);
    output(numb,n);
    change_index(numb,n,k);
    output(numb,n);
    

    return 0;
}