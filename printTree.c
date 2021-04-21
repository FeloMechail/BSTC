/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"
/*printTree.c to store all print functions for BST*/

//print tree level functions to print nodes at each level
void printTreeLevel(struct node* root, int lvl){
    if(root == NULL){ printf("x "); return; } //base case
    if(lvl == 1){
        printf("%d ", root->data); //if level 1 print node data
    }else if(lvl > 1){ //if greater than level 1
        printTreeLevel(root->left, lvl-1); //subtract level and traverse to the left
        printTreeLevel(root->right, lvl -1); //subtract level and traverse to the right
    }
}

//print tree functions to print tree
void PrintTree(struct node* root){
    int h = height(root); //get tree height
    for(int i = 1; i<=h; i++){ //traverse tree for each level
    printf("depth (%d) -    ", i); //print depth
    printTreeLevel(root, i); //get nodes at that level
    printf("\n");
    }
}

//print Inorder traverse of BST
void printInorder(struct node* root){
    //if tree is not empty print Inorder
    if(root != NULL){
        printInorder(root->left);
        printf("%d ", root->data);
        printInorder(root->right);
    }
}

//print Postorder traverse of BST
void printPostorder(struct node* root){
    //if tree is not empty print Postorder
    if(root != NULL){
        printPostorder(root->left);
        printPostorder(root->right);
        printf("%d ", root->data);
    }
}

//print preorder traverse of BST
void printPreorder(struct node* root){
    //if tree is not empty print preorder
    if(root != NULL){
        printf("%d ", root->data);
        printPreorder(root->left);
        printPreorder(root->right);
    }
}
