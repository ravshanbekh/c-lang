#include <stdio.h>

struct user{
    char name[16];
    char login[32];
    char password[16];
    int age;
    char country[32];
    char gender[8];
};

int main(){
    struct user Kamol;
    printf("Ismingiz: ");scanf("%s",Kamol.name);
    printf("login: ");scanf("%s",Kamol.login);
    printf("parol: ");scanf("%s",Kamol.password);
    printf("Yosh: ");scanf("%d",&Kamol.age);
    printf("Davlat: ");scanf("%s",Kamol.country);
    printf("Jins: ");scanf("%s",Kamol.gender);
    puts(" ");
    printf("Ism:%s\n",Kamol.name);
    printf("Login:%s\n",Kamol.login);
    printf("Password:%s\n",Kamol.password);
    printf("Yosh:%d\n",Kamol.age);
    printf("Davlat:%s\n",Kamol.country);
    printf("Gender:%s\n",Kamol.gender);
}