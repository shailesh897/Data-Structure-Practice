#include <stdio.h>

#define MAX 2
struct stack
{
  int top;
  int arr[MAX];
}; 

void push(struct stack *st,int value)
{
  if (st->top>=MAX)
    printf("\n\t\t\t\t\tStack Overflow");
  else
  {
    st->top+=1;
    st->arr[st->top]=value;
    printf("\n\t\t\t\t\t%d is pushed",value);
  }
}

void pop(struct stack *st)
{
  if(st->top==-1)
    printf("\n\t\t\t\t\tStack Underflow");
  else
  {
    printf("\n\t\t\t\t\t%d is popped",st->arr[st->top]);
    st->top-=1;
  }
}

void show(struct stack *st)
{
  if(st->top==-1)
    printf("\nEmpty");
  else
  {
    printf("\n");
    for(int i=0;i<=st->top;i++)
    {
      printf("\t%d ",st->arr[i]);
    }
  }
}
void peek(struct stack*st)
{
  if(st->top==-1)
    printf("\nTop Element:None");
  else
    printf("\nTop Element:%d",st->arr[st->top]);
}
int main(void) 
{
  struct stack stack1;stack1.top=-1;
  push(&stack1,3);peek(&stack1);show(&stack1);
  push(&stack1,6);peek(&stack1);show(&stack1);
  push(&stack1,8);peek(&stack1);show(&stack1);
  push(&stack1,-1);peek(&stack1);show(&stack1);
  printf("\n");
  
  printf("\n");
  pop(&stack1);peek(&stack1);show(&stack1);
  pop(&stack1);peek(&stack1);show(&stack1);
  pop(&stack1);peek(&stack1);show(&stack1);
  pop(&stack1);peek(&stack1);show(&stack1);
  return 0;
}
