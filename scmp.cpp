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

// R171219001's part start here


void pop(int *curr) 
{ 
if(*curr == 0) 
cout<<“\nStack is EMPTY\n ”; 
else 
{ 
Node *ptr = top; 
top = top -> link; 
delet(ptr); 
*curr--; 
} 
}
// R171219001's part end here.
