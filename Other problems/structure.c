#include<stdio.h>
struct student{
char name[20];
};
int main(){
struct student vishika={"vishika"};
printf("name : %s",vishika.name);
return 0;
}