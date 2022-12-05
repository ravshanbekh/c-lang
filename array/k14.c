#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int n,m,s=0;
    printf("n="); scanf("%d",&n);
    printf("m="); scanf("%d",&m);
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=-10+rand()%31;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int c=0;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<0){
                break;
            }
            c++;
            s+=arr[i][j];
            printf("%d+",arr[i][j]);
        }
        if(c<n){
            break;
        }
    }
      
    
    printf("=%d",s);
    

    }