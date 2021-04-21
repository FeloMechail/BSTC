/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"
/*populateTree.c to store populate functions of BST*/

//populate function 1 which can be chosen with char !
struct node* populateBst1(struct node* root){
    int dataAry[] ={10,4,18,3,5,2,1,8,7,9,12,16,14,17,22,27,25,32}; //values
    int n = sizeof(dataAry)/sizeof(dataAry[0]);  //get array count
    for (int i=0; i < n; i++) {
        //search if any of the values in the array already exists in tree
        struct node* exits = search(root, dataAry[i]); 
        if(exits != NULL){
            //if item already exists, print "already exists"
            printf("\nNode: %d already exits\n", dataAry[i]);
        } else {
            //otherwise add to BST and increase count
            root = insert(root, dataAry[i]);
            count++;
        }
    }
    return root;
}

//populate function 2 which can be chosen with char #
struct node* populateBst2(struct node* root){
    int dataAry[] ={1,2,3,4,5,6};  //values
    int n = sizeof(dataAry)/sizeof(dataAry[0]); //get array count 
    for (int i=0; i < n; i++) {
        //search if any of the values in the array already exists in tree
        struct node* exits = search(root, dataAry[i]);
        if(exits != NULL){
            //if item already exists, print "already exists"
            printf("\nNode: %d already exits\n", dataAry[i]);
        } else {
            //otherwise add to BST and increase count
            root = insert(root, dataAry[i]);
            count++;
        }
    }
    return root;
}