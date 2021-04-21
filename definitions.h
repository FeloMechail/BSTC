/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

/*definitions.h to declare all other functions than BST functions*/

#ifndef DEFINITIONS_H_INCLUDED
 #define DEFINITIONS_H_INCLUDED

  //initilizing Functions
char doMenu(void);
int count;
struct node* cases(struct node* root, char option);
struct node* insertFunction(struct node* root);
struct node* deleteFunction(struct node* root);
void searchFunction(struct node* root);
struct node* balanceTree(struct node* root);
void printTreeFunction(struct node* root);
void printInorderFunction(struct node* root);
void printPostorderFunction(struct node* root);
void printPreorderFunction(struct node* root);
struct node* balanceTreeFunction(struct node* root);
int BstToArray(struct node *node, int *arr, int i);
void SortArr(int *arr, int count);
struct node* arrayToBST(int *arr, int start, int end);
 #endif // DEFINITIONS_H_INCLUDED