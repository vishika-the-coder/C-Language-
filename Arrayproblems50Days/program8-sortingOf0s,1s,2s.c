//WAP of sorting of 0's,1's and 2's.
#include<stdio.h>
int main(){
int arr[]={0,1,2,1,0,2,1,0,2};
int size=sizeof(arr)/sizeof(arr[0]);

//count the occurrences of each number.
int count0=0,count1=0,count2=0;

for(int i=0; i<size; i++){
if(arr[i]==0){
count0++;
} else if(arr[i]==1){
count1++;
} else{
count2++;
}
} 

//Rebuild the array.
int index=0;

for(int i=0; i<count0; i++){
arr[index++]=0;
}

for(int i=0; i<count1; i++){
arr[index++]=1;
}

for(int i=0; i<count2; i++){
arr[index++]=2;
}

//Output the Sorted array.

printf("Sorted Array is : ");
for(int i=0; i<size; i++){
printf("%d ",arr[i]);
}

printf("\n");
return 0;
}