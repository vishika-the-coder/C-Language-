#include<stdio.h>
int main(){
int i,j,temp,n, nthlargest,k,smallest,p;
int arr[6]={4,9,3,1,8,7};
 n=sizeof(arr)/sizeof(arr[0]);
printf("unsorted array is: ");
for(i=0;i<6;i++){
	printf("%d \t",arr[i]);
}

for(i=0;i<6;i++){
for(j=0;j<6-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("\nsorted array is: ");
for(i=0;i<6;i++){
	printf("%d\t",arr[i]);
}
printf("\nenter the  kth largest element you want: ");
scanf("%d",&k);
printf("\nenter the kth smalles element you want p: ");
scanf("%d",&p);
nthlargest=(n-k);
smallest=(p-1);
printf("the nth largest element is: %d\n",arr[nthlargest]);
printf("the nth smallest element is: %d\n",arr[smallest]);

return 0;
}