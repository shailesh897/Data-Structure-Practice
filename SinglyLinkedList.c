#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *START=NULL;
//function to create a new node and returns its pointer
struct node* createNode(int value)
{
  struct node *ptr=(struct node *)malloc(sizeof(struct node));//memory is created for node
  ptr->data=value;
   ptr->next=NULL; 
  return ptr;
}
//funtion to add a new node to the link list
void addNewNodeAtStart(struct node *ptr)
{
  if (START==NULL)//list is empty
    START=ptr;
  else
  {
    struct node *temp=START;
    START=ptr;  
    ptr->next=temp;
  } 
}
//to print the link List
void printLinkedList()
{
   struct node *temp=START;
   while(temp!=NULL)
   {
     printf("%d ",temp->data);
     temp=temp->next;
   }
}

int main(void) 
{
 addNewNodeAtStart(createNode(8));
 addNewNodeAtStart(createNode(-7));
 addNewNodeAtStart(createNode(50));
 addNewNodeAtStart(createNode(32));
 printLinkedList();
 printf("\n");
 addNewNodeAtStart(createNode(0));
 printLinkedList();
}
