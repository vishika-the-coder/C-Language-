//wAP OF MALLOC
#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr=(int*)malloc(5*sizeof(int));
if(ptr==NULL){
printf("memory not allocated.\n");
return 0;
}
/* for(int i=0; i<5; ++i)
{ptr[i]=i+1;
}*/
 
for(int i=0; i<5; ++i)printf("%d ",ptr[i]);
free(ptr);
return 0;
}