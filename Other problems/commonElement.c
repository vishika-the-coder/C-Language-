#include<stdio.h>
int main(){
int arr1[]={2,3,4,5,6,7};
int arr2[]={1,3,14,50,6,17};
int arr3[]={12,3,24,25,6,74};

int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);
int n3=sizeof(arr3)/sizeof(arr3[0]);

int i=0,j=0,k=0;
printf("common element is : ");

while(i<n1 && j<n2 && k<n3){
if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
printf("%d ",arr1[i]);
i++;
j++;
k++;
}

else if(arr1[i]<arr2[j]){
i++;
}

else if(arr2[j]<arr3[k]){
j++;
}

else{
k++;
}

}
return 0;
}