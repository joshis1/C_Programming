Trees

Tree is a non-linear data structure.

Linear Data Structure examples - Array, stack, Queue, Linked List.

Tree is ideal for representing hierarichal data.

Example - File System structure like in linux 

/var, /etc, /var/lib. The root here is /.

#Terminology 

1) Root --> Topmost Node
2) Parent -> Node which connects to the child.
3) Child -> Node which is connected by another node is its child.
4) Leaf/Extend Node  Nodes with no children
5) Internal Node - Nodes with atleast one child.
6) 
## Depth of the Node 
Number of edges from root to that node.

Root Node depth is 0.

How far it is from the root is called depth.
Basically from root how long will it take to reach to that node.

7)
## Height of the Node 
Number of edges to the deepest node i.e. leaf node.
Basically, how many nodes are there after that node.

8)  Sibling - Nodes belonging to the same parent.

9)  Ancestors - parents or above parents.

10) Descendents --> child or grand children.

## What is a Binary Tree

1) Top node is Root Node.

Binary Tree is a tree whose degree is not more than 2.
Basically degree, means how many nodes are connected to a 
particular node.

2) leaf node degree is 0 since there are no nodes connected 
down to it. 

3) Binary Tree is a tree which has at most 2 childs for all the 
nodes.

Tree is made up of nodes and edges.
No of edges = number of nodes - 1

4) Why no of edge is number of nodes - 1?
This is because there is nothing connected to root.
You can see this visually that number of edges is 1 less than 
the number of nodes.

5) What is degree?

Number of direct children

6) Degree of a tree is the highest degree of a node among all the 
nodes present in the tree.

Binary Tress = Tree of degree 2 - i.e. Nodes can have 0,1 or 2 children.

Root is the top node, edges is the line that connects the two 
nodes, leaf node is the node with no children.

## Types of Binary Trees

1) Full or strict Binary Tree - 

All nodes have either 0 or two children. 

          [Root Node]
         /           \
      [Node]        [Node] 
     /     \        /    \

It cannot have one child.

2) Perfect Binary Tree - 

Internal node have 2 children + All leaf nodes are at same level.

The below is not a perfect binary tree because internal node N2 has only one child. All they have the same level 
but the internal node has just one child.
 
           [Root Node]
          /          \
        N1            N2
      /    \          \


3) Complete Binary Tree -

All the levels are filled up, except possible the last level - 
i.e. it should be left aligned.

Basically, what is not filled in the leaf node, if you see then 
you should all the nodes on the left side. There should not be any 
missing node on the left side.

All levels are completely filled except possibly 
the last level + last level must have its keys as left as possible.

          [Root Node]
          /          \
        N1            N2
      /    \        /   \
    X       Y      W    ==> Missing

Look at the left from the "Missing", you can see all the left are 
filled up therefore it is complete binary tree. Also, all such 
things are happening on the leaf nodes i..e last level.

Not a complete binary tree - 

	   [Root Node]
          /          \
        N1            N2
      /    \        /   \
    X       Y           W
	
Here I see missing on the left side of W therefore it is not a 
complete binary tree. 

4) Degenerate Tree - 

Every parent node has exactly one child. 

## Degenerate Tree types

Left Skewed 
  [root]
  /
  node1
  /
  node2
  /
  leaf node 
  
  
Right Skewed 
        [root]
		    \
			 node 1
			  \
			  node 2
			   \
			   leaf node 
			   
