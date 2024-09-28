//WAP to find a peak element which is not smaller than its neigbours.
#include<stdio.h>
int findPeak(int arr[],int n)
{
if(n==1)
return 0;
if(arr[0]>=arr[1])
return 0;
if(arr[n-1]>=arr[n-2])
return n-1;
for(int i=1;i<n-1;i++){
if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
return i;
}
}
int main(){
int arr[]={1,3,20,4,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
printf("Index of a peak point is %d",findPeak(arr,n));
return 0;
}
/*Time Complexity:O(N)where N=n.o of elements in the input array.
  Auxiliary Space:O(1).
*/