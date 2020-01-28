#include<iostream>
using namespace std;

int queue[5];
int front=-1;
int rear=-1;
int value(){
int a;
cout<<"enter the value"<<endl;
cin>>a;
return a;

}
void insert(){
if((rear+1)%5==front){
cout<<"The queue is full"<<endl;

}else if (rear==-1 && front==-1){
rear++;
front++;
queue[rear]=value();
}
else{
 rear=(rear+1)%5;
 queue[rear]=value();

}}
void del(){
   if (rear==-1 && front==-1){
cout<<"the queue is empty "<<endl;

}else if (rear==front){
 rear=-1;
front=-1;
}else {
   front=(front+1)%5;
}

}
void Display(){
int i=front;
if(front==-1){
cout<<"the queue is empty"<<endl;

}
else{
  while(i!=rear){
    cout<<"the value is "<<queue[i]<<endl;
    i =(i+1)%5;
}
    cout<<"Front "<<front<<" Rear="<<rear<<endl;
}

}

int main(){
  
cout<<"1 Insert"<<endl;
cout<<"2 Delete"<<endl;
cout<<"3 Display"<<endl;
cout<<"4 Exist"<<endl;
int ch;
do{
cout<<"enter the choice"<<endl;
cin>>ch;
switch(ch){
case 1:
insert();
break;
case 2:
del();
break;
case 3:
Display();
break;
case 4:
break;
default:
cout<<"invalid option"<<endl;
break;
}

}while(ch!=4);



}

