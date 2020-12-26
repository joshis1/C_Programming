
#ifndef GRAPH_H_
#define GRAPH_H_

#include "gluethread/glthread.h"
#include <stddef.h>
#include <string.h>

#define NODE_NAME_SIZE 16
#define IF_NAME_SIZE 16
#define MAX_INTF_PER_NODE 10

typedef struct node_ node_t;
typedef struct link_  link_t;


typedef struct graph_{
	
  char topology_name[32];
  glthread_t node_list;  
}graph_t;

typedef struct interface_ {
	
	char if_name[IF_NAME_SIZE];
	struct node_ *att_node;
	struct link_ *link;
}interface_t;


struct link_ {
  interface_t intf1;
  interface_t intf2;
  unsigned int cost;  
};

struct node_ {
  char node_name[NODE_NAME_SIZE];
  interface_t *intf[MAX_INTF_PER_NODE];
  glthread_t graph_glue;// traditional list doesn't need it.
};


GLTHREAD_TO_STRUCT(graph_glue_to_node, node_t, graph_glue);



static inline node_t *get_nbr_node(interface_t *interface)
{
	link_t *link = interface->link;
	if(&link->intf1 == interface)
		return link->intf2.att_node;
	else
		return link->intf1.att_node;
}

static inline int get_node_intf_available_slot(node_t *node)
{
	int i;
	for(i = 0; i < MAX_INTF_PER_NODE; i++) {
		
		if(node->intf[i])
			continue;
		return i;
	}
	
	return -1;
	
}

static inline interface_t *get_node_if_by_name(node_t *node, char *if_name)
{
   int i;
   for(i = 0; i < MAX_INTF_PER_NODE; i++) {
     
	 if(!strcmp(node->intf[i]->if_name, if_name))
	 {
		 //found the match
         return node->intf[i];		 
	 }

   }	

  return NULL; // not found   
	
}

static inline node_t * get_node_by_node_name(graph_t *topo, char *node_name)
{
	node_t *node;
	glthread_t *curr;
	
	ITERATE_GLTHREAD_BEGIN(&topo->node_list, curr)
	{
	   node = graph_glue_to_node(curr);
       if(strncmp(node->node_name, node_name, strlen(node_name)) == 0)
         return node;	 
	}
	ITERATE_GLTHREAD_END(&topo->node_list, curr);
	
	return NULL;
	
}

graph_t *create_new_graph(char *topology_name);

node_t *create_graph_node(graph_t *graph, char *node_name);

void insert_link_between_two_nodes(node_t *node1, node_t *node2,
char *from_if_name,  char *to_if_name, unsigned int cost);


void dump_graph(graph_t *graph);

void dump_node(node_t *node);

void dump_interface(interface_t *interface);


#endif




