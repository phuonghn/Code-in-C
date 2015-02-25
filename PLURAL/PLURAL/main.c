//
//  main.c
//  PLURAL
//
//  Created by Phuong Nguyen on 2/7/15.
//  Copyright (c) 2015 Phuong Nguyen. All rights reserved.
//


#include <stdio.h>
#include <string.h>

#define max_word 10

void plural (char word[]);


int main (void)
{
    char noun[max_word];   /* stores temporary word entered by user */
    char original_input[max_word];
    
    printf("Please enter a word: ");
    scanf("%s", noun);
    
    strcpy(original_input, noun);
    
  
    plural(noun);
    printf("The plural from of %s is %s.",original_input, noun);
    
    return 0;
}

void plural (char word[])
{
    int length;
    length = 1;
    length = (int)strlen(word);
    
    if (word[length - 1] == 'y'){
        if (word[length -2] == 'a' || word[length -2] == 'e' ||word[length -2] == 'i'|| word[length -2] == 'o' ||word[length -2] == 'u'){
            strcat(word, "s");
        }
        else{
        word[length - 1] = 'i';
        word[length] = 'e';
        word[length + 1] = 's';
        word[length + 2] = '\0';
        }
    }
    
    
    /* if word ends in "x" "z" "s" "ch" or "sh" add "es" */
    
    else if (word[length - 1] == 's' || word[length - 1] == 'x' ||
             word[length - 1] == 'z'|| (word[length - 2] == 'c' && word[length - 1] == 'h') ||
             (word[length - 2] == 's' && word[length - 1] == 'h'))
    {  strcat(word, "es");

    }
    else if (word[length - 1] == 'f'){
        word[length - 1] = 'v';
        word[length] = 'e';
        word[length + 1] = 's';
        word[length + 2] = '\0';
    }
    else if (word[length - 2] == 'f' && word[length - 1] == 'e'){
        word[length - 2] = 'v';
        word[length - 1] = 'e';
        word[length ] = 's';
        word[length + 1] = '\0';
        
    }
    
    else
    {   strcat(word, "s");
        
        
    }
    return;
}






/* void plural( char string[] ){
 int length=1;
 char new;
 
 length =strlen(string);
 
 if (string(length -1) == 'x' || string[length -1 ] == 'z' || string[length -1] == 's' ){
 
 string(length) = 'e';
 string(length + 1) = 's';
 string(length +2) = '\0';
 
 }
 return;
 }
 
 
 int main(){
 
 char user_input[20];
 
 
 printf("Please enter a word: ");
 scanf( "%s", user_input);
 
 plural(user_input);
 
 printf( "The plural from %s.\n",user_input );
 
 return 0;
 
 
 }
 */
