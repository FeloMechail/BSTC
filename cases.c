/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"
/*cases.c to store cases functions that has menu functions*/

struct node* cases(struct node* root, char option){
    switch (option)
        {
        case 'i':
            //case i to insert into BST
            root = insertFunction(root);
            break;
    
        case 'd':
            //case d to delete from BST
            root = deleteFunction(root);
            break;
        
        case 'p':
            //case p to print BST
            printTreeFunction(root);
            break;
        
        case 'n':
            //case n to get number of leafs in BST
            printf("\nNo. of leafs: %d\n", getLeafNodes(root));
            break;
        
        case 'x':
            //case x to delete entire tree
            root = deleteTree(root);
            printf("\nDone, Tree deleted\n");
            break;
        
        case 's':
            //case s to search for in item in tree
            searchFunction(root);
            break;
        
        case 'o':
            //case o to print Inorder traverse
            printInorderFunction(root);
            break;
        
        case 't': 
            //case t to print postorder traverse  
            printPostorderFunction(root);
            break;

        case 'r':
            //case r to print preorder traverse
            printPreorderFunction(root);
            break;

        case 'b':
            //case b to balance BSt
            root = balanceTreeFunction(root);
            break;

        case '!':
            //hidden case ! to populate Tree
            root = populateBst1(root);
            break;

        case '#':
            //hidden case # to populate tree
            root = populateBst2(root);
            break;
        }
        
        return root;
}
