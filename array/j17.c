//oxirgi manfiy sondan uyog'idagi sonlar kopaytmasini topish
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
void kopaytir(int array[],int n){
    int s=1;
    for(int i=n-1;i>=0;i--){
        if(array[i]>=0){
            printf("%d ",array[i]);
            s*=array[i];
        }else{break;}
    }
    printf("\n%d",s);
}
int main(){
    int n;
    scanf("%d",&n);
    int numb[n];
    srand(time(0));
    fill_numb(numb,n);
    output(numb,n);
    kopaytir(numb,n);


    return 0;
}