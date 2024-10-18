#include<stdio.h>
struct student{
char name[20];
int age;
int rollnumber;
int marks[5];
};
int main(){
struct student studentArray[10];
for(int i=0;i<2;i++){
scanf("%s%d%d",studentArray[i].name,&studentArray[i].age,&studentArray[i].rollnumber);
 printf("enter 5 subject marks: ");
 for(int j=0;j<5;j++){
scanf("%d",&studentArray[j].marks);
}
}
for(int i=0;i<2;i++){
printf("NAME is: %s \n",studentArray[i].name);
printf("AGE is:  %d \n",studentArray[i].age);
printf("Roll number is: %d \n",studentArray[i].rollnumber);
printf("MATHS:   %d \n",studentArray[i].marks[0]);
printf("SCIENCE: %d \n",studentArray[i].marks[1]);
printf("S.St:    %d \n",studentArray[i].marks[2]);
printf("ENGLISH: %d \n",studentArray[i].marks[3]);
printf("HINDI:   %d \n",studentArray[i].marks[4]);
printf("\n\n");
}

return 0;
}
