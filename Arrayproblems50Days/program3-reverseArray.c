//WAP to reverse the array using optimised approach.

#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int size_of_array=sizeof(arr)/sizeof(arr[0]);
int start=0;
int temp;
int end=size_of_array - 1;

for(int i=0; i<size_of_array; i++){
printf("%d ",arr[i]);
}
printf("\n");

while(start<end){
	temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	start++;
	end--;
}

for(int i=0;i<=size_of_array - 1; i++){
	printf("%d ",arr[i]);
}

return 0;
}