/* CS2211b 2021 */
/* Assignment 05 */
/* Felopater Mechail */
/* 250951202 */
/* fkarim26 */
/* 6/4/2021 */ 

#include "headers.h"
/*menu.c to store menu function*/
char doMenu(void){

char option; 
 /* Statements */ 
 printf( "\n=============== Menu ===============\n" ); 
 printf( " i: Insert         | o: In Order \n" ); 
 printf( " d: Delete         | t: Post Order \n" ); 
 printf( " p: Print          | r: Pre Order \n" ); 
 printf( " n: No. of Leafs   | b: Balance Tree \n" ); 
 printf( " x: Destroy Tree   | q: Quit \n"); 
 printf( " s: Search                       \n" ); 
 printf( "====================================\n" ); 
 printf( "Please enter your choice: " ); 
 scanf( " %c", &option ); 
 option = tolower ( option ); 
 return option;
}

