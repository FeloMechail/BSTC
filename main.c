/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"
/*main functions which holds the menu*/

int main(int argc, char *argv[]){
    char option;
    struct node *root = NULL; //create an empty BST
    
    while(option != 'q'){
        //print menu functions
        option = doMenu();
        //cases functions 
        root = cases(root, option);
    }
    
    //when program ends delete tree 
    deleteTree(root);
    printf("\nFINISHED\n");
}