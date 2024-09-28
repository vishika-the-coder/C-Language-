#include<stdio.h>
int main(){
int arr[4][5]={{1,1,1,1,1},{0,0,1,1,1},{0,1,1,1,1},{0,0,1,1,1}};
int count0=0,count1=0;
int maxCount1 = 0, rowIndex=0;
for(int i=0; i<4; i++){
	count0 = 0,count1 = 0;
for(int j=0; j<5; j++){
if(arr[i][j]==0){
count0++;
}
else if (arr[i][j] == 1){
count1++;
}
}

if (count1 > maxCount1) {
	maxCount1 = count1;
	rowIndex = i;
}
}

printf(" 1s: %d in Row : %d \n",maxCount1,rowIndex); 

return 0;
}