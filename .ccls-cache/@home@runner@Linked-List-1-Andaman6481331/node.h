#include <iostream>
#include <string>

using namespace std;


class node
{private:
    int id;
	   string name; 
    node* next;
 public:
    node(int,string);
    void print();
    node* get_next();
    void set_next(node*);
   ~node();
     };

typedef node* nodePtr;
nodePtr y;

node::node(int i,string n){
  id=i;
  name=n;
  next=NULL;
}

node::~node(){
  cout<<name<<" delete"<<endl;
}

void node::print(){
  cout<<"Name. "<<name<<" Id  "<<id<<endl;
}

node* node::get_next(){
  return next;
}

void node::set_next(nodePtr x){
  this->next=x;
}

