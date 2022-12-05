#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n;
    printf("n="); scanf("%d",&n);
    int arr[n][n],nums[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=-10+rand()%31;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    puts(" ");
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            nums[j][i]=arr[i][j];
    }}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }
    
    

    }