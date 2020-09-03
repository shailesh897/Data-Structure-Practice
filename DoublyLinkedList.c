#include <stdio.h>
#include<stdlib.h>
struct node 
{
  int data;
  struct node *next,*pre;
};
//linked list
struct node *START=NULL;

struct node* createNewNode(int value)
{
  struct node* ptr=(struct  node*)malloc(sizeof(struct node));
  ptr->data=value;
  ptr->next=NULL;
  ptr->pre=NULL;
  return ptr;
}

void addNewNodeAtStart(struct node* newNode)
{
  if (START==NULL)
    START=newNode;
  else
  {
    struct node* temp=START;
    START=newNode;
    newNode->next=temp;
    temp->pre=newNode;
  }
}

void addNewNodeAtEnd(struct node* newNode)
{
  if (START==NULL)
    START=newNode;
  else
  {
    struct node *temp=START;
    while(temp->next!=NULL)
      temp=temp->next;
    temp->next=newNode;
    newNode->pre=temp;
  }
}
 void addNewNodeAt(struct node*newNode,int index)
 {
  if (START==NULL)
    START=newNode;
  else
  {
    int count=0;
    struct node *temp=START,*tempPre=temp->pre;
    while(count!=index)
    {
      count++;
      temp=temp->next;
    }  
    tempPre=temp->pre;
    tempPre->next=newNode;
    newNode->pre=tempPre;
    newNode->next=temp;
    temp->pre=newNode;
  }
 }
void printLinkedList()
{//forward traversing
  if(START==NULL)
    printf("\n\t\t\tEmpty");
  else
  {
    struct node* temp=START;
    while(temp!=NULL)
    {
      printf("  %d",temp->data);
      temp=temp->next;
    }
  }
}


void printReversedLinkedList()
{//backward traversing
  if (START==NULL)
    printf("Empty");
  else
  {
    struct node* temp=START;
    while(temp->next!=NULL)
      temp=temp->next;
    while(temp!=NULL)
    {
      printf("  %d",temp->data);
      temp=temp->pre;
    }
    
  }
}

int main(void) 
{
  addNewNodeAtStart(createNewNode(5));
  addNewNodeAtStart(createNewNode(4));
  addNewNodeAtStart(createNewNode(3));
  addNewNodeAtStart(createNewNode(2));
  printLinkedList();
  printf("\n");
  printReversedLinkedList();
  addNewNodeAtEnd(createNewNode(11));
  addNewNodeAtEnd(createNewNode(10));
  addNewNodeAtEnd(createNewNode(9));
  addNewNodeAtEnd(createNewNode(8));
  printf("\n");
  printLinkedList();
  printf("\n");
  printReversedLinkedList();
  addNewNodeAt(createNewNode(11),3);
  addNewNodeAt(createNewNode(10),2);
  addNewNodeAt(createNewNode(9),0);
  addNewNodeAt(createNewNode(8),1);
  printf("\n");
  printLinkedList();
  printf("\n");
  printReversedLinkedList(); 
  return 0;
}
