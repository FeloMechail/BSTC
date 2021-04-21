/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include"headers.h"
/*BStree.c to store all BST functions*/

//function to create new node
struct node *newNode(int item){
    struct node *leaf = (struct node *)malloc(sizeof(struct node)); //allocate memory to store new node
    leaf->data = item; //store item in node data
    leaf->left = leaf->right = NULL; //set node children as null

    return leaf; //return node
}

//function to insert item into BST
struct node* insert(struct node* root, int item){
    //if the tree is empty, return new node
    if(root == NULL) return newNode(item);

    //if item is less than parent number, go to the left
    if(item < root->data){
        root->left = insert(root->left, item);
    }else{ //else go to the right
        root->right = insert(root->right, item);
    }

    return root;
}

//function to find the smallest value in the tree
struct node * minValueNode(struct node* root){
    //while root and its left child are not null
    while(root && root->left != NULL){
        root = root ->left; //get left child and store it in root
    }
    return root;
}


//function to delete node in BST
struct node* deleteNode(struct node* root, int item){
    //if root is empty, return root / base case
    if(root == NULL) return root;

    //traverse to the left if item is less than parent item
    if(item < root ->data){ root->left = deleteNode(root->left, item); }

    //otherwise to the right if greater
    else if(item > root->data) { root->right = deleteNode(root->right, item); }

    else { 
        //if left child is null, 
        if(root->left == NULL) {
            //store right child in temp
            struct node* temp  = root->right;
            free(root); //delete right child
            return temp; 
            //otherwise
        } else if(root->right == NULL){
            //store left child in temo
            struct node* temp = root->left;
            free(root); //delete left child
            return temp;
        }

        //find smallest value in tree and store it in temp
        struct node* temp = minValueNode(root->right);

        //replace delete node with smallest value
        root->data = temp->data;

        //remove smallest value node
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}


//function to calculate theh height of the tree
int height(struct node* root){
    if(root == NULL){return 0;}
    else {
        //set left_height to traverse left child of root
        int left_height = height(root->left);

        //set right_height to traverse left child of root
        int right_height = height(root->right);

        //if left height greater than right height add 1 to left height
        if(left_height > right_height){
            return (left_height + 1);
        } else {
            //otherwise add 1 to right height
            return (right_height + 1);
        }
    }
}


//function to search for item in BST
struct node* search(struct node* root, int item){
    //if tree is empty return null / base case
    if(root == NULL) {return NULL;}

    //if node matches the item return it
    if(root->data == item) {return root;}

    //if item less than parent item, traverse to the left
    if(item < root->data){return search(root->left, item);}

    //otherwise traverse to the right
    if(item > root->data){return search(root->right, item);}
}


//function to delete entire tree
struct node* deleteTree(struct node* root){
    if(root != NULL){
    //delete left part of tree
    deleteTree(root->left);
    //delete right part of tree
    deleteTree(root->right);
    //free each node
    free(root);
    }
    //set root as null
    root = NULL;
    //set count as 0
    count = 0;
    return root;
}


//Function to get leaf nodes
int getLeafNodes(struct node* root){
    //base case
    if(root == NULL){ return 0;}
    // Check for leaf node 
    if(root->left == NULL && root->right == NULL){ return 1;}
    // For internal nodes, return the sum of leaf nodes in left and right sub-tree 
    return getLeafNodes(root->left) + getLeafNodes(root->right);
}

