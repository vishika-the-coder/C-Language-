#include<stdio.h>
int main(){ 

int arr[5]={5,-2,4,-1,7};
int n=5; 
int min;
for(int i=0; i<n-1; i++){
min=i;
for(int j=i+1; j<n; j++){
if(arr[j]<arr[min]){
min=j;
}
}

int temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;

}

printf("sorted array: \n");
for(int i=0; i<n; i++){
printf("%d ",arr[i]);
}
printf("\n");

return 0;
}