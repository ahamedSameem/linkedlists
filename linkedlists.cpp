#include <iostream>
using namespace std;
class node{
public:
    int value;
    node *next;
};
void display(node *first)
{
    while(first!=NULL){
    cout<<first->value<<endl;
    first=first->next;
}
}
void insertinfront(node**first,int newvalue)
{
    node *newnode=new node();
    newnode->value=newvalue;
    newnode->next=*first;
    *first=newnode;
}
void insertinlast(node **first,int newvalue)
{
    node *newnode=new node();
    newnode->value=newvalue;
    newnode->next=NULL;
    if(*first==NULL)
    {
        *first=newnode;
        return;
    }
    node*last=*first;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=newnode;
}
void insertinbetween(node *previous,int newvalue)
{
    if(previous==NULL)
    {
        cout<<"previous cant be null";
        return;
    }
    node *newnode=new node();
    newnode->value=newvalue;
    newnode->next=previous->next;
    previous->next=newnode;
}
int main()
{
 node *first=new node();
 node *second=new node();
 node *third=new node();

 first->value=1;
 first->next=second;
 second->value=2;
 second->next=third;
 third->value=3;
 third->next=NULL;
 insertinbetween(first,9);
 insertinlast(&first,2);
 insertinfront(&first,3);
 display(first);
return 0;
}
