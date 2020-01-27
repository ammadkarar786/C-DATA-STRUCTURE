
#include <iostream>

using namespace std;
struct node{
  int data;
  node *next;
};
struct node *head;

void insert_b(int x){
struct node *temp=new node;
temp->data=x;
temp->next=head;
head=temp;

}
void insert_e(int x){
struct node *temp=new node,*s=new node;
temp->data=x;
s=head;
while (s->next!=NULL){
s=s->next;

}
s->next=temp;
temp->next=NULL;
}

void del_front(){
if(head==NULL){
cout<<"the linked list empty"<<endl;
}
else{
struct node *temp;
temp=head;
head=head->next;
delete temp;
}
}
void del_end(){
if(head==NULL){
cout<<"empty linked listed"<<endl;

}
else{
struct node *temp ,*prenode;
temp=head;
while (temp->next!=NULL){
 prenode=temp;
temp=temp->next;
}
if(temp==head){
head=NULL;
delete temp;
}
else{
prenode->next=0;
delete temp;
}

}
}

void Print(){
struct node *counter=head;
 cout<<"The list is"<<endl;
 while (counter->next!=NULL){
  cout<<counter->data<<endl;
  counter=counter->next;
}
  cout<<counter->data<< " address is "<<counter->next<<endl;
  

}

void display(){
cout<<"1. add in front"<<endl;
cout<<"2. add in end"<<endl;
cout<<"3. Delete  in front"<<endl;
cout<<"4. Delete in end"<<endl;
cout<<"5. Display"<<endl;
}
int main(){
   head=NULL;
  int n,x;
   cout<<"enter the number of linked listed u want to make "<<endl;
   cin>>n;
  for (int i=0;i<=n;i++){
 cout<<"enter the number to add"<<endl;
 cin>>x;
insert_b(x);
Print();
}

char ch;

while (ch!='n'){
   display();
  int op;
int a;
cout<<"enter the option"<<endl;
cin>>op;
switch(op){
case 1:
   cout<<"enter the data"<<endl;
cin>>a;
      insert_b(a);
break;
case 2:
cout<<"enter the data"<<endl;
cin>>a;
   insert_e(a);
break;
case 3 :
   del_front();
break;
case 4:
del_end();
break;
case 5:
Print();
break;
default:
cout<<"the invalid option"<<endl;

}
cout<<"do you want to continue"<<endl;
cin>>ch;

}

}
