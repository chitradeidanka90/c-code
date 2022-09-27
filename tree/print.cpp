// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


void preorder(node* root){
    if(root==NULL) return;
      cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(root==NULL) return;
      cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node* root){
    if(root==NULL) return;
      cout<<root->data<<" ";
    postorder(root->left);
    postorder(root->right);
}

int main() {
  node* root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(4);
  root->left->right=new node(5);
  root->right->left=new node(6);
  root->right->right=new node(7);
  preoroder(root); cout<<endl;
   inoroder(root); cout<<endl;
    postoroder(root); cout<<endl;
}