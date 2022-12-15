#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char region[16];
    char street[32];
    int DoorNum;
}Address;


typedef struct{
    char name[16];
    char pos[16];
    int year;
    bool isworking;
    Address address;
}Worker;

Worker qabul(Worker k[],int n){
    for (int i=0;i<n;i++){
        printf("Name: ");scanf("%s",k[i].name);
        printf("Pos: ");scanf("%s",k[i].pos);
        printf("Year: ");scanf("%d",&k[i].year);
        printf("isworking(0/1): ");scanf("%d",&k[i].isworking);
        printf("Region: ");scanf("%s",k[i].address.region);
        printf("Street: ");scanf("%s",k[i].address.street);
        printf("DoorNum: ");scanf("%d",&k[i].address.DoorNum);

    }
}

void output(Worker k[],int n){
    for(int i=0;i<n;i++){
        puts(" ");
        printf("Name:%s\n",k[i].name);
        printf("Pos:%s\n",k[i].pos);
        printf("Year:%d\n",k[i].year);
        if(k[i].isworking==1){
            printf("isworking:True\n");
        }else if(k[i].isworking==0){
            printf("isworking:False\n");
        }
        printf("Region:%s\n",k[i].address.region);
        printf("Street:%s\n",k[i].address.street);
        printf("DoorNum:%d\n",k[i].address.DoorNum);
        puts(" ");
    }
}

Worker saralash(Worker k[],int n){
    Worker temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(k[i].name[0]>k[j].name[0]){
                temp=k[i];
                k[i]=k[j];
                k[j]=temp;
            }
        }
    }
    return k[n];
}
int main(){
    Worker k[5];
    qabul(k,5);
    output(k,5);
    puts("\n");
    saralash(k,5);
    output(k,5);
    puts(" ");



    return 0;
}