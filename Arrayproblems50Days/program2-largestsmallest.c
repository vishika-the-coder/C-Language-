//WAP to find the largest and smallest element of the array.
#include<stdio.h>
int main(){
int arr[5]={0,1,2,3,4};
int smallest,largest;
smallest=0;
largest=0;
for(int i=1;i<5;i++){
if (arr[i]<smallest){
smallest=arr[i];
}
if(arr[i]>largest){
largest=arr[i];
}
}
printf("the smallest n.o is: %d\n",smallest);
printf("the largest n.o is: %d\n",largest);
return 0;
}
