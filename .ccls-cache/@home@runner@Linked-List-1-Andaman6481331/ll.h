#include "node.h"

class LL{
   nodePtr head; //head of linked list
   int size;
  public:
     LL();
      void insert_node(int, string);
	    void print_all();
     ~LL();
};
LL::LL(){
  head=NULL;
  size=0;
}

typedef node* nodePtr;

void LL::insert_node(int j,string k){
  if(head==NULL){
    head = new node(j, k);
  }else{
    nodePtr temp = head;
    while(temp->get_next()!=NULL){
      temp=temp->get_next();
    }
    temp->set_next(new node(j, k));
  }
  
}

void LL::print_all(){
  nodePtr t = head;
  while(t != NULL){
    t->print();
    t = t->get_next();
  }
}


LL::~LL(){
  int i;
  nodePtr t=head;
  while(head){
    t=head->get_next();
    delete head;
    head = t;
  }
}

