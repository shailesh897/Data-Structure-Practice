#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};

void push(struct node **start,int value)//add New Node At Start
{
  //create New Node
  struct node* ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=value;
  ptr->next=NULL;
  //add New Node At start
  if (*start==NULL)//list is empty
 
    *start=ptr;  
  else
  {
    struct node *temp=*start;
    *start=ptr;  
    ptr->next=temp;
  } 
  printf("\n%d is PUSHED",value);
}
void pop(struct node **start)//delete Node At Start
{
  if(*start==NULL)
    printf("Under Flow");
  else
  {
    struct node *temp=*start;
    *start=temp->next;
    printf("\n%d is POPPED",temp->data);
    free(temp);
  }
}

 void show(struct node** start)
 {
  //print linked list code
   struct node *temp=*start;
   while(temp!=NULL)
   {
     printf("%d  ",temp->data);
     temp=temp->next;
   }
 }

int main(void) 
{
  //new linked list
  struct node* LinkedList=NULL;
  push(&LinkedList,7);printf("\n");
  show(&LinkedList);
  push(&LinkedList,6);printf("\n");
  show(&LinkedList);
  push(&LinkedList,9);printf("\n");
  show(&LinkedList);
  push(&LinkedList,5);printf("\n");
  show(&LinkedList);
  push(&LinkedList,74);printf("\n");
  show(&LinkedList);
  push(&LinkedList,72);printf("\n");
  show(&LinkedList);
  push(&LinkedList,70);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
  pop(&LinkedList);printf("\n");
  show(&LinkedList);
}
