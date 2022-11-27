#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fill_numb(int array[],int n){
    int k;
    for(int i=0;i<n;i++)
    {
        sur:
        k=1+rand()%15;
        array[i]=k;
        for(int j=0;j<i;j++){
            if(array[j]!=array[i] && i!=j){
                continue;
            }else{
                goto sur;
                break;
            }
        }
    }
}


void output(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    puts(" ");
}

int main() {
    int numb[10];
    srand(time(0));
    fill_numb(numb,10);
    output(numb,10);
    
    
    
    
 

    return 0;
}