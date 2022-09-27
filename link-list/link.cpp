// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertTail(node* &head,int val){
    node* n=new node(val);
    node* temp =head;
    if(head==NULL){
        head=n; 
        return;
    }
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void insertHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void deleteHead(node* &head){
    node *todelete=head;
    head=head->next;
    delete todelete;
}

void deleteNode(node* &head,int val){
    if (head==NULL) return;
    if(head->next==NULL) deleteHead(head);
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

bool search(node* &head,int val){
    node* temp=head;
    while(temp !=NULL){
        if(temp->data==val) return true;
          
        temp=temp->next;
    }
    return false;
}

void print(node* head){
    while(head != NULL){
        cout<<head->data<<"-> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
     node* head=NULL;
     insertTail(head,1);
     insertTail(head,2);
     insertTail(head,3);
     insertTail(head,4);
     insertHead(head,0);
     print(head);
     cout<<search(head,9)<<endl;
     deleteNode(head,3);
     deleteHead(head);
     print(head);
    return 0;
}