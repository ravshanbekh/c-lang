// arraydagi 1-toq va 1-juft indexni chiqarish
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_numb(int array[],int n){
    for(int i=0;i<n;i++){
        array[i]=rand()%101;
    }
}
void output(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    puts(" ");
}
void select_sort(int numb[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(numb[i]>numb[j]){
                temp=numb[i];
                numb[i]=numb[j];
                numb[j]=temp;
            }
        }
    }
}
int binary_search(int numb[],int n,int k){
    int high=n-1,low=0,mid;
    while(low<=high){
        mid=(high+low)/2;
        if(numb[mid]==k){
            return 1;
        }else if(numb[mid]>k){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return 0;

}

int main(){
    int n,k;
    int i=1,m=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int numb[n];
    srand(time(0));
    fill_numb(numb,n);
    output(numb,n);
    select_sort(numb,n);   
    output(numb,n);
    if(binary_search(numb,n,k)==1){
        printf("bor");
    }else{
        printf("yoq");
    }
    


    return 0;
}