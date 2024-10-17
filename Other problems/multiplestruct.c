#include<stdio.h>
struct student{
char name[20];
int age;
int rollnumber;
int marks[5];
};
int main(){
struct student studentArray[10];
for(int i=0;i<5;i++){
scanf("%s%d%d",studentArray[i].name,&studentArray[i].age,&studentArray[i].rollnumber);
}

for(int i=0;i<5;i++){
scanf("%d",&studentArray[i].marks);
}

for(int i=0;i<5;i++){
printf("NAME is: %s \n",studentArray[i].name);
printf("AGE is:  %d \n",studentArray[i].age);
printf("Roll number is: %d \n",studentArray[i].rollnumber);
printf("MATHS:   %d \n",studentArray[i].marks);
printf("SCIENCE: %d \n",studentArray[i].marks);
printf("S.St:    %d \n",studentArray[i].marks);
printf("ENGLISH: %d \n",studentArray[i].marks);
printf("HINDI:   %d \n",studentArray[i].marks);
printf("\n\n");
}

/*for(int i=0;i<5;i++){
printf("marks are: %d\n",studentArray[i].marks);
}*/

return 0;
}
