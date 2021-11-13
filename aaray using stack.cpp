#include<iostream.h>
#include<conio.h>
#define size 5
int stack[size];
int top=-1;        

void push(int val)
{
 if(top==size-1)
 {
  cout<<"\nStack Overflow";
  return;
 }

 top++;
 stack[top]=val;

}
void main()
{
 clrscr();
 int i;
 cout<<"\nBy Parth Shrivastava"<<endl;
 push(66);
 push(30);
 push(74);
 push(45);
 push(40;
 push(10);
 cout<<"\nElements in stack are :-";
 for(i=top;i>=0;i--)
 {
  cout<<stack[i]<<",";
 }
 getch();
}