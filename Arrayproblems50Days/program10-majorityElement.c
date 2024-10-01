//WAP to find the majority_element.
#include<stdio.h>
int main(){
int arr[]={2,1,2,3,2,6,2};
int size=sizeof(arr)/sizeof(arr[0]);
int majority_element=-1;

for(int i=0; i<size; i++){
	int count =0;
for(int j=0; j<size; j++){
if(arr[i]==arr[j]){
count++;
}
}
if(count>size/2){
 majority_element=arr[i];
 break;
}
}
if( majority_element!=-1){
printf("The majority element is: %d ", majority_element);
}
else{
printf("There is no  majority element ");
}
return 0;
}