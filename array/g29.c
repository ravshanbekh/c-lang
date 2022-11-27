//1-juft va oxirgi toqlar orasidagi sonlar yig'indisi
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
void summa(int array[],int n){
    int s=0,u,v;
    for(int i=n-1;i>=0;i--){
        if(array[i]%2==1){
            u=i;
            break;
            }
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            v=i;
            break;
            }
    }
    for(int i=v+1;i<u;i++){
        s+=array[i];
    }
    printf("%d",s);
}
int main(){
    int n;
    scanf("%d",&n);
    int numb[n];
    srand(time(0));
    fill_numb(numb,n);
    output(numb,n);
    summa(numb,n);


    return 0;
}