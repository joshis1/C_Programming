/*
    2
   /   \
  1     3
*/


#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <sstream>
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
    
    vector<int> data;
    
    void in_order(Node *root)
	{
	   if(root == NULL)
	   {
	     return;
	   }
	   
	   // left, root, right
	   in_order(root->left);
	   data.push_back(root->data);
      cout<<root->data<<",";
	   in_order(root->right);
	   
	}

    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        in_order(root);
        
        bool result = true;

        result = is_sorted(data.begin(), data.end());
        if(result)
        {
           //check for duplicates.
           auto it = std::unique(data.begin(), data.end());
           result = (it == data.end());
        }
        
        return result;
        
    }
};


int main(int argc, char **argv)
{
   string input;
   int key;
   struct Node *root = NULL;
   cout<<"Insert root data"<<endl;
   getline(std::cin, input);
   stringstream(input) >> key;
   root = insert_root(key);
   //insert(root, key);   
   cout<<"root->data"<<root->data;
   cout<<"Insert Nodes"<<endl;
   for(int i = 0; i < 7; i++)
   {
      cout<<"Input Key Value"<<endl;
   	getline(std::cin, input);
   	stringstream(input) >> key;
   	insert_key(root,key);
   }

  Solution  check;
  if(check.isBST(root))
  {
      cout<<"Correct Binary Search Tree"<<endl;
  }
  else
  {
      cout<<"Incorrect BST since inorder is not giving sorted binary tree"<<endl;
  }

  return 0;
}
