/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

/* BStree.h to declare all BST functions and structure */

#ifndef BSTREE_H
 #define BSTREE_H
//node structure
typedef struct node 
{ 
 int data; 
 struct node* right; 
 struct node* left; 
} NODE; 

//BST function definitons
struct node *newNode(int ); 
struct node* insert(struct node*, int ); 
struct node * minValueNode(struct node* ); 
struct node* deleteNode(struct node*, int ); 
struct node* populateBst1(struct node* );
struct node* populateBst2(struct node* );
int height(struct node* );
void printTreeLevel(struct node* , int );
void PrintTree(struct node* );
void printInorder(struct node* ); 
void printPostorder(struct node* ); 
void printPreorder(struct node* ); 
struct node* search(struct node*, int);
struct node* deleteTree(struct node* );
int getLeafNodes(struct node* );

 #endif