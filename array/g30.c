//nechta musbat manfiy toq juftlarni ciqarish
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
void summa(int array[],int n){
    int s_manfiy=0,s_musbat=0,s_juft=0,s_toq=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==1){
            s_toq++;
            }
        else{s_juft++;}    
    }
    for(int i=0;i<n;i++){
        if(array[i]>0){
            s_musbat++;
            }else if(array[i]<0){
                s_manfiy++;
            }
    }
    printf("musbatlar=%d\n",s_musbat);
    printf("manfiylar=%d\n",s_manfiy);
    printf("juftlar=%d\n",s_juft);
    printf("toqlar=%d\n",s_toq);
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