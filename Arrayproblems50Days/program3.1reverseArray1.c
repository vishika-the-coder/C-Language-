//WAP to reverse the array using Bruteforce method.

#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int size_of_array=sizeof(arr)/sizeof(arr[0]);
int reverseArr[size_of_array];

for(int i=0; i<size_of_array; i++){
reverseArr[i]=arr[size_of_array - i - 1];
}

for(int i=0; i<size_of_array ; i++){
printf("%d ",arr[i]);
}
printf("\n");

for(int i=0; i<size_of_array; i++){
	printf("%d ",reverseArr[i]);
}

return 0;
}