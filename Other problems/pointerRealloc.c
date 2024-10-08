#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr=(int*)malloc(5*sizeof(int));
if(ptr==NULL){
printf("memory not allocated.\n");
return 0;
}
ptr=(int*)realloc(ptr,10*sizeof(int));
if(ptr==NULL){
printf("Re-allocation failed.\n");
return 0;
}
for(int i=0; i<10; ++i)ptr[i]=i+1;
for(int i=0; i<10; ++i)printf("%d ",ptr[i]);
free(ptr);
return 0;
}