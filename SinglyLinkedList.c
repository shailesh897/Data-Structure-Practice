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
void addNewNodeAtEnd(struct node *ptr)
{
  if(START==NULL)
    START=ptr;
  else
  {
    struct node* temp=START;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=ptr;
  }
}
//add node  at given index
void addNewNodeAt(struct node *ptr,int index)
{
  if(START==NULL)
    START=ptr;
  else
  {
    struct node* temp=START;
    struct node* t=temp->next;
    int count=0;
    while(count!=index-1)
    {
      temp=temp->next;
      t=temp->next;
      count++;
    }
    temp->next=ptr;
    ptr->next=t;
  }
}

void deleteNodeAtStart()
{
  if(START==NULL)
    printf("Empty list");
  else
  {
    struct node* temp=START;
    START=START->next;
    free(temp);
  }
}
void deleteNodeAtEnd()
{
  if(START==NULL)
    printf("Empty list");
  else
  {
    struct node* temp=START;
    struct node* t=temp->next;//t always  points  to the next node of temp pointer  
    while(t->next!=NULL)
    {
      temp=temp->next;
      t=temp->next;
    }
    temp->next=NULL;
    free(t);
  }
}
//delete node at given index
void deleteNodeAt(int index)
{
  if (START==NULL)
    printf("Empty List");
  else
  {
    int count=0;
    struct node* temp=START;
    struct node* t=temp->next;
    while(count!=index-1)
    {
      temp=temp->next;
      t=temp->next;
      count++;
    }
    temp->next=temp->next->next;
    t->next=NULL;
    free(t);
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
 addNewNodeAtEnd(createNode(8));
 addNewNodeAtEnd(createNode(-7));
 addNewNodeAtEnd(createNode(50));
 addNewNodeAtEnd(createNode(32));
 printLinkedList();
 addNewNodeAt(createNode(100),3);
 printf("\n");
 printLinkedList();
}
