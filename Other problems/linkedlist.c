#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

int main(){
struct node *head=(node*)malloc(sizeof(node));
if(head==NULL){
printf("space is not available");
}
head->data=5;
head->link=NULL;
printf("%d",head->data);
return 0;
}