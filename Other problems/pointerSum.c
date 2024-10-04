//calculate sum of the array.
include<stdio.h>
int calculateArraySum(int a[4]){
int sum=0;
for(int i=0; i<4; i++){
sum=sum+a[i];
}
return sum;
}

int main(){
int a[4]={1,2,3,4};
int x,addition;
 addition=calculateArraySum(a);
 printf("sum of numbers is: %d ",addition);
return 0;
}