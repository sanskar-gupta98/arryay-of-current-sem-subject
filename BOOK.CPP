#include<iostream.h>
#include<conio.h>

struct book
{
char name[20];
int price;
};
int main()
{
book b;
clrscr();
cout<<"enter the name of book: \n ";
cin>> b.name;
cout<<"enter the price: \n";
cin>>b.price;
{
cout<<"enter the book details";
cout<<"name"<<b.name;
cout<<"price"<<b.price;
}
return 0;
}

