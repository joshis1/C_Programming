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

//Function to find the minimum element in the given BST.
int minValue(Node* root)
{
    // Code here
    if(root == NULL)
    {
        return -1;
    }
    
    if(root->left == NULL && root->right == NULL)
    {
        //leaf node
        return root->data;
    }
    if(root->left == NULL && root->right != NULL)
    {
        // simply return root since right data will be greater.
        return root->data;
    }
    
    if( root->left)
    {
      minValue(root->left);
    }
   
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
   
   cout<<minValue(root)<<endl;
   
   
   
   
   return 0;
}
