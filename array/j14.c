//J14:

// Berilgan massivdan K o'lchamdagi har bir qo'shni kichik massivlar uchun maksimal elementni topish dasturini yozing.

// IN: A[]={1, 3, 6, 21, 4, 9, 12, 3, 16, 10}
// K=4

// OUT:
// 1 3 6 21 —-> 21
// 3 6 21 4 —-> 21
// 6 21 4 9 —-> 21
// 21 4 9 12 —> 21
// 4 9 12 3  —-> 12
// 9 12 3 16 —> 16
// 12 3 16 10 —-> 16
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
void k_max(int array[],int n,int k){
    for(int j=0;j<n-k+1;j++){
        for(int i=j;i<k+j;i++){
            printf("%d ",array[i]);
        }  
        int max=array[j]; 
        for(int i=1+j;i<k+j;i++){
            if(max<array[i]){
                max=array[i];
            }      

        }
        printf("--->%d\n",max);
    }
}
int main() {
    int n,k;
    printf("nechta qiymat qabul qilsin: ");
    scanf("%d",&n);
    printf("son kiriting: ");
    scanf("%d",&k);
    int numb[n];
    fill_numb(numb,n);
    output(numb,n);
    k_max(numb,n,k);
    

    return 0;
}