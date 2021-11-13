#include<iostream.h>
#include<conio.h>
#include<malloc.h>
 struct Node
 {
  int data;
  struct Node *addr;
 }
 *Head=NULL;
  struct Node *create(int val);
  struct Node *create(int val)
  {
   struct Node *newn;
   newn = (Node*)malloc(sizeof(struct Node));
   newn->data=val;
   return(newn);
  }

  void main()
  {
  clrscr();
   struct Node *n1,*n2,*n3,*Last;
   n1 = create(23);
   n2 = create(34);
   n3 = create(45);

   Head=n1;
   n1->addr=n2;
   n2->addr=n3;
   Last=n3;
   n3->addr=Head;

   struct Node *temp=Head;
   cout<<"\nCircular Linked List"<<endl;
   cout<<"Head";
   while(temp!=Last)
   {
     cout<<"-->"<<temp->data;
     temp=temp->addr;
   }
   cout<<"-->"<<temp->data;

    struct Node *newn2;
    newn2=(Node*)malloc(sizeof(struct Node));
    newn2->data=12;
    if(Head==NULL)
    {
     newn2->addr=Head;
     Head=Last=newn2;
    }
    else
    {
     newn2->addr=Head;
     Last->addr=newn2;
     Head=newn2;
    }

   cout<<"\nAfter insertion at beginning"<<endl;
   struct Node *temp1=Head;
   cout<<"\nCircular Linked List"<<endl;
   cout<<"Head";
   while(temp1!=Last)
   {
     cout<<"-->"<<temp1->data;
     temp1=temp1->addr;
   }
   cout<<"-->"<<temp1->data;
   getch();
  }