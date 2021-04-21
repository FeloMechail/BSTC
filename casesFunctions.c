/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"

/*casesFunctions.c to store all functions used in cases.c*/

//case insert function to prompt the user to enter value
struct node* insertFunction(struct node* root){
    int num;
    //prompt the user to enter value to add into BST
    printf("\nEnter integer value to be inserted into the BST: ");
    scanf("%d", &num);
    //search if that value already exists in tree
    struct node* exits = search(root, num);
    //if exists print value already exists and return root
    if(exits != NULL){
        printf("\nNode: %d already exits\n", num);
        return root;
    }
    //otherwise insert new item into tree
    struct node* new_node = insert(root, num);
    
    printf("\n");
    //increase count by 1
    count++;
    return new_node;
}


//case delete function to prompt the user to delete value
struct node* deleteFunction(struct node* root){
    //if tree is empty, print failed 
    if(root == NULL){
        printf("\n*Failed, Tree is empty\n");
        return root;
    }
    int num;
    //prompt the user to enter value to be deleted from bst
    printf("\nEnter integer value to be deleted from the BST: ");
    scanf("%d", &num);

    //search if that value already exists
    struct node* new_node = search(root, num);
    struct node* del = deleteNode(root, num);
    
    //if item doesnt exists, print failed
    if(new_node == NULL){
        printf("\n*Failed, Node not in BST\n");
    } else {
        //if item exists and got deleted, print success
        printf("\nsuccess, Node: %d was deleted\n", num);
        count--;
    }
    return del;
}

//case Search function to prompt the user to search for value
void searchFunction(struct node* root){
    //if tree is empty, print tree is empty
    if(root == NULL){ printf("\nTree is empty\n"); return;}
    int num; 

    //prompt the user to enter value to be searched in bst
    printf("\nEnter an integer value to search in BST: ");
    scanf("%d", &num);

    //use search function to search for that value
    struct node* new_node = search(root, num);
    //if not found, print failed
    if(new_node == NULL){
        printf("\nFailed, Node: %d not found\n", num);
    } else if (new_node->data == num){
        //otherwise print success
        printf("\nSuccess, %d found\n", num);
    }
}


//case balance tree function print if tree is balanced or failed
struct node* balanceTree(struct node* root){
    //if tree is not empty
    if(root != NULL){
        //allocate memory to store all values in BST
        int *arr = (int*)malloc(count*sizeof(int));
        //store all the values into the dynamic memory
        BstToArray(root,arr,0);
        //sort the dynamic memory
        SortArr(arr,count);
        //store current count in temp
        int temp = count;
        //delete current tree
        deleteTree(root);
        //construct a balanced BST from sorted aray
        root = arrayToBST(arr,0,temp-1);
        //free allocated memory
        free(arr);
        //return count to original value
        count = temp;
        //print tree is balanced
        printf("\nTree is balanced\n");
        return root;
    } else {
        //otherwise print failed if tree is empty
        printf("\nFailed, Tree is empty\n");
        return root;
    }
}


//case printTree function to print BST
void printTreeFunction(struct node* root){
        //if tree is not empty print tree
        if(root != NULL){
        printf("\n");
        PrintTree(root);
        printf("\n");
    } else {
        //otherwise print failed
        printf("\nFailed, Tree is empty\n");
    }
}

//case printInorder function
void printInorderFunction(struct node* root){
        //if tree is not empty print tree
        if(root != NULL){
        printf("\nResult of Inorder Traversal print:\n");
        printInorder(root);
        printf("\n");
        } else {
            //otherwise print failed
            printf("\nFailed, Tree is empty\n");
        }

}

//case printPostorder function
void printPostorderFunction(struct node* root){
        //if tree is not empty print tree
        if(root != NULL){
        printf("\nResult of Postorder Traversal print:\n");
        printPostorder(root);
        printf("\n");
    } else {
        //otherwise print failed
        printf("\nFailed, Tree is empty\n");
    }
}

void printPreorderFunction(struct node* root){
        //if tree is not empty print tree
        if(root != NULL){
        printf("\nResult of Preorder Traversal print:\n");
        printPreorder(root);
        printf("\n");
        } else {
        //otherwise print failed
        printf("\nFailed, Tree is empty\n");
        }
}

struct node* balanceTreeFunction(struct node* root){
        //if tree is not empty balance tree
        if(root != NULL){
        root = balanceTree(root);
        printf("\n");
        return root;
        } else {
        //otherwise balance failed
        printf("\nFailed, Tree is empty\n");
        return root;
        }
}