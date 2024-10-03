#include<stdio.h>
int main(){
int arr[]={10,20,30,40,50,60,70,80,90};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=1; i<n; i+=2){
int temp=arr[i];
	arr[i]=arr[i-1];
	arr[i-1]=temp;
}
printf("Elements in wave form are :");

for(int i=0; i<n; i++){
printf(" %d ",arr[i]);
}
printf("\n");

return 0;

}