#include<stdio.h>
struct dateofbirth{
	int day;
	int month;
	int year;
};
struct student{
char name[20];
int age;
int rollnumber;
struct dateofbirth dob;
int marks[5];
};
int main(){
struct student studentArray[10];
for(int i=0;i<2;i++){
scanf("%s%d%d",studentArray[i].name,&studentArray[i].age,&studentArray[i].rollnumber,&studentArray[i].dob.day,&studentArray[i].dob.month,&studentArray[i].dob.year);
 printf("enter 5 subject marks: \n");
 for(int j=0;j<5;j++){
scanf("%d",&studentArray[i].marks[j]);
}
}
for(int i=0;i<2;i++){
printf("NAME is: %s \n",studentArray[i].name);
printf("AGE is:  %d \n",studentArray[i].age);
printf("Roll number is: %d \n",studentArray[i].rollnumber);
printf("day: %d\n",studentArray[i].dob.day);
printf("month: %d\n",studentArray[i].dob.month);
printf("year: %d\n",studentArray[i].dob.year);
for(int j=0;j<5;j++) {
	switch (j) {
		case 0:
		printf("MATHS:   %d \n",studentArray[i].marks[j]);
		break;
		case 1:
		printf("SCIENCE: %d \n",studentArray[i].marks[j]);
		break;
		case 2:
		printf("S.St:    %d \n",studentArray[i].marks[j]);
		break;
		case 3:
printf("ENGLISH: %d \n",studentArray[i].marks[j]);
		break;
		case 4:
printf("HINDI:   %d \n",studentArray[i].marks[j]);
	}
}
printf("\n\n");
}

return 0;
}