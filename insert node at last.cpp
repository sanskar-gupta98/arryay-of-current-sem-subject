/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<stdlib.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;

};
void linklist(struct Node *ptr)
{
    while(ptr!=NULL){
    cout<<"elements:"<<ptr->data<<endl;
    ptr=ptr->next;
    }
}
//insertion of node at last
struct Node * insertatend(struct Node *n1,int data)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=n1;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    ptr->data=data;
    p->next=ptr;
    ptr->next=NULL;
    return n1;
}

int main()
{
    struct Node *n1,*n2,*n3,*n4;
    n1=(struct Node*)malloc(sizeof(struct Node));
    n2=(struct Node*)malloc(sizeof(struct Node));
    n3=(struct Node*)malloc(sizeof(struct Node));
    n4=(struct Node*)malloc(sizeof(struct Node));
    
    n1->data=10;
    n1->next=n2;

    n2->data=20;
    n2->next=n3;

    n3->data=30;
    n3->next=n4;

    n4->data=40;
    n4->next=NULL;
     
     cout<<"linked list before insertion"<<endl;
     linklist(n1);
     cout<<"linked list after insertion at the end"<<endl;
     n1=insertatend(n1,50);
     linklist(n1);
     return 0;
}