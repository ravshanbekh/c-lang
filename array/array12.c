//arraylarni solishtirish
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
void bir_xil_sonlar(int numb1[],int n,int numb2[],int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            if(numb1[i]==numb1[j]){
                break;
            }
            if(numb2[i]==numb2[j]){
                break;
            }

            if(numb1[i]==numb2[j]){
                printf("%d ",numb1[i]);
            }
        }
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int numb1[n],numb2[k];
    srand(time(0));
    fill_numb(numb2,k);
    fill_numb(numb1,n);
    output(numb1,n);
    output(numb2,k);
    bir_xil_sonlar(numb1,n,numb2,k);
    


    return 0;
}