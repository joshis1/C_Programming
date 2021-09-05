/*
    2
   /   \
  1     3
*/


#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node
{
  int data;
  struct Node *left;
  struct Node *right;
};

void insert(struct Node *root, int key)
{
   if(root == NULL)
   {
       root = (struct Node *)malloc(sizeof (struct Node));
       root->data = key;
       root->left = NULL;
       root->right = NULL;
       return;
   }
   
   
   if( key == root->data)
   {
       return;
   }
   
   if(key < root->data && root->left == NULL)
   {
       root->left = (struct Node *)malloc(sizeof(struct Node));  
       root->left->left = NULL;
       root->left->right = NULL;
       root->left->data = key;
   }
   
   if(key < root->data && root->left != NULL)
   {
      insert(root->left, key);
   }
      
    
   if( key > root->data && root->right != NULL)
   {
       insert(root->right, key);
   }
   
   if(key > root->data && root->right == NULL)
   {
      root->right = (struct Node *)malloc(sizeof(struct Node));
      root->right->left = NULL;
      root->right->right = NULL;
      root->right->data = key;
   }

}

void insert_key(struct Node *root, int key) {
    // your code here
    insert(root, key);
    
}

struct Node* insert_root(int key)
{
   struct Node *root = (struct Node *)malloc(sizeof (struct Node));
   root->data = key;
   root->left = NULL;
   root->right = NULL;
   return root;
}

class Solution
{
    public:
    
    
    void in_order(Node *root)
	{
	   if(root == NULL)
	   {
	     return;
	   }
	   
	   // left, root, right
	   in_order(root->left);
       cout<<root->data<<",";
	   in_order(root->right);
	   
	}
};

int result1 = 0;

void countMyLeaves(Node *root)
{
    if(root->left == NULL && root->right == NULL)
   {
       //cout<<"result1 = "<<result1<<endl;
       result1 = result1 + 1;
       return;
   }
   if(root->left)
   {
    //std::cout<<"root->left->data"<<root->left->data<<std::endl;
    countMyLeaves(root->left);
   }
   if(root->right)
   {
     //std::cout<<"root->right->data"<<root->right->data<<std::endl;
     countMyLeaves(root->right);
   }
}

int countLeaves(Node* root)
{
  // Your code here
  result1 = 0;
  countMyLeaves(root);
  //std::cout<<"result1 = "<<result1<<endl;
  return result1;
   
}


int main(int argc, char **argv)
{
   vector<int> data{15,50,10,22,35,70,4,12,18,24,31,44,66,90};
  
   struct Node *root = insert_root(25);
   for(int i : data)
   {
	   insert_key(root,i);
   }
   
   Solution check;
   cout<<endl;
   check.in_order(root);
   cout<<endl;
   
   cout<<countLeaves(root)<<endl;
   
   
   
   
   return 0;
}
