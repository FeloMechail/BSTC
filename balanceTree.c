/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"
/* balanceTree.c which holds all the functions to balance an existing binary search tree
    
idea to take BST values and add them to an array
Sort the array
delete the existing tree
construct a balanced tree from the sorted array, the mid value of the array will be made into root.

*/

//Function to add existing BST to an array
int BstToArray(struct node *node, int *arr, int i)
{
     if(node == NULL) //base case
          return i;


     *(arr + i) = node->data; //add node data to arr with index i 
     i++; //add 1 to index 
     if(node->left != NULL) //if left child is not empty, go to left child
          i = BstToArray(node->left, arr, i);
     if(node->right != NULL) //if right child is not empty go to right child
          i = BstToArray(node->right, arr, i);

     return i;
}
//Function to sort the array which holds BST values
void SortArr(int *arr, int count){
    int temp; //temp to hold array array value
    for(int i = 0; i < count; i++){ //loop through array and get their value
        for(int j = i + 1; j < count; j++){//loop through array and get their next value
            if(*(arr + i) > *(arr + j)){ //compare if first value is bigger than second
                temp = *(arr + i); //place larger value in temp
                *(arr + i) = *(arr + j); //switch both values to place the smaller first
                *(arr + j) = temp; //put back the larger value into the array
            }
        }
    }
}

//Function to construct a balanced BST from sorted array
struct node* arrayToBST(int *arr, int start, int end)
{
    // base Case 
    if (start > end)
      return NULL;
  
    // Get the middle element and make it root 
    int mid = (start + end)/2;
    struct node *root = newNode(*(arr + mid));
  
    //recursively construct the left subtree and make it left child of root 
    root->left =  arrayToBST(arr, start, mid-1);
  
    //Recursively construct the right subtree and make it right child of root 
    root->right = arrayToBST(arr, mid+1, end);
  
    return root;
}
