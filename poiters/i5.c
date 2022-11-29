// arraydagi 1-toq va 1-juft indexni chiqarish
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_numb(int array[],int n){
    for(int i=0;i<n;i++){
        array[i]=rand()%21;
    }
}
void output(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    puts(" ");
}
void toq_juft(int numb[],int n,int *u,int *v){
    for(int i=0;i<n;i++){
        if(numb[i]%2==1){
            *u=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(numb[i]%2==0){
            *v=i;
            break;
        }
    }
}

int main(){
    int n,u,v;
    scanf("%d",&n);
    int numb[n];
    srand(time(0));
    fill_numb(numb,n);
    output(numb,n);
    toq_juft(numb,n,&u,&v);
    printf("1-toq index %d\n1-juft index %d",u,v);
    


    return 0;
}