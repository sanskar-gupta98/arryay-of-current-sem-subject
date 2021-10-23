/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>       
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
} *First = NULL,*Last = NULL;

node *init(int n){
    node *newNode=(node *)malloc(sizeof(node));
    newNode->data = n;
    newNode->link = NULL;
    if (First==NULL)
    {
        First = newNode;
        Last = newNode;
    }
    else
    {
        Last->link=newNode;
        Last = newNode;
    }
    return newNode;
}

int main()
{
    node *n1, *n2, *n3, *n4, *n5;      //Creating nodes of linked list
    
    n1 = init(1);
    n2 = init(2);
    n3 = init(3);
    n4 = init(4);
    n5 = init(5);

    node *temp;                    
    temp = First;
    cout << "Singly Linked List:\n";
    while (temp != NULL)
    {
        if (temp != n5)
            cout << temp->data<< "-->";
        else
            cout << temp->data;

        temp = temp->link;
    }


//node insertion
    node *n6;                   
    n6 = (node *)malloc(sizeof(node));
    
    n6->info = 60;
    n6->link = NULL;
    n5->link = n6;
    temp = First;
    cout << "\nSingly Linked List after insertion on last position:\n";
    while (temp != NULL)
    {
        if (temp != n6)
            cout << temp->data << "-->";
        else
            cout << temp->data;

        temp = temp->link;
    }

    return 0;           
}
