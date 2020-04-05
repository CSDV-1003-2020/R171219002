#include<iostream> 
using namespace std; 
struct Node 
{ 
int data; 
Node *link; 
}; 
Node *top = Null; 
void push(int max, int *curr) 
{ 
if(max<=*curr) 
{ 
cout<<”\n Stack is FULL\n”; 
} else 
{ 
int value; 
cin>>value; 
Node *ptr = new Node; 
ptr->data = value; 
ptr->link = top; 
*curr ++; 
} 
}                      // Till here the code is from Aditya Raj
