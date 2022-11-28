#include <stdio.h>

void palindrom(int nums[],int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=nums[n-1-i]){
            printf("palindrom son emas");
            c++;
            break;
        }
    }
    if(c==0){
        printf("palindrom son");
    }

}

int main(){
    int n;
    printf("nechta qiymat kiritasiz: ");scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    palindrom(nums,n);


    return 0;
}