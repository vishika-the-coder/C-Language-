#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node *link;
};

//void display(struct node *start);
//void count(struct node *start);
//void search(struct node *start, int data);

struct Node *addAtBeg(struct Node *start, int data){
struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
temp->data=data;
start=temp;
temp->link=NULL;
return start;
}


int main(){
struct Node *start=NULL;
start=addAtBeg(start,5);
start=addAtBeg(start,50);
printf("value of first node is %d",start->data);
return 0;
}

