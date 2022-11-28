// J15:


// Berilgan massivni ikki qismga shunday ajratingki chap va o'ng tomon qismidagi elementlar yig'indisi teng bo'lsin. Agar buning imkoni bo'lmasa,  bu haqida ma'lumot chiqaring.

// IN: 1 3 3 8 4 3 2 3 3
// OUT: 1 3 3 8 = 4 3 2 33
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void teng_bolaklar(int nums[],int n){
    int sum1=0,sum2=0,c=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            sum1+=nums[j];
        }
        for(int j=i;j<n;j++){
            sum2+=nums[j];
        }
        c++;
        if(sum1==sum2){
            printf("teng\n");
            for(int j=0;j<c;j++){
                printf("%d ",nums[j]);
            }
            printf("===");
            for(int j=c;j<n;j++){
                printf(" %d",nums[j]);
            }
            break;
        }else{
            sum1=0;
            sum2=0;
        }
    }

}

int main(){
    int n;
    printf("nechta qiymat kiritasiz: ");scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    teng_bolaklar(nums,n);


    return 0;
}