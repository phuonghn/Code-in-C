//
//  main.c
//  anagram
//
//  Created by Phuong Nguyen on 2/9/15.
//  Copyright (c) 2015 Phuong Nguyen. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define max_word 20 //define the max length of the word as 20

//define to two functions so we can declare them later
int find_anagram(char word1[max_word], char word2[max_word]);
void lowercase(char word[max_word]);

int main()
{
    // initalize all the words with length of 20
    char word1[max_word], word2[max_word];
    
    //initilizes the orignal input so we can print them later
    char user_input1[max_word];
    char user_input2[max_word];
    
    int flag; //this variable will indicate if "true" of "false" (anagrams or NOT anagrams)
    
    //get the user input
    printf("Please enter the first word: ");
    scanf("%s",word1);
    printf("Please enter the second word: ");
    scanf("%s", word2);
    
    //copy the user input to another array so we can print them later
    strcpy(user_input1, word1);
    strcpy(user_input2, word2);
    
    //convert the words to lowercase
    lowercase(word1);
    lowercase(word2);
    
    /*call the find_anagram function,
      if it's true (1) then the two words are anagrams,
      if it's false (0) then te two words are not anagrams */
    flag = find_anagram(word1, word2);
    if (flag == 1)
        printf("%s is an anagram of %s", user_input1, user_input2);
    else
        printf("%s is NOT an anagram of %s", user_input1, user_input2);
    return 0;
}


/* this function convert the user input to lowercase so the anagrams can be case insensitive */
void lowercase(char word[max_word]){
    int i = 0;
    
    
    /* 'a' is 32 ASCII characters in front 'A'. So if you add 32 to all uppercase characters, then your string will turn into lower case */
    for(i=0; word[i]; i++){
        if(word[i]>='A' && word[i]<='Z') word[i] += 32;}
    return;
}


/* this function return 1 (true) if the two words are anagrams and 0 (false) if the two words
    are not anagrams */
int find_anagram(char word1[max_word], char word2[max_word])
{
    
    /* initializes two new integer arrays with the size of 26 ( 26 letters in the alphabet)
     which will be iterated through to see if all the letters in word1 match all the letters in word2 */
    int num1[26] = {0}, num2[26] = {0}, i = 0;
    
    
    //The while loops count the number of each letter (a-z)
    while (word1[i] != '\0')
    {
        num1[word1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (word2[i] != '\0')
    {
        num2[word2[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;// 0 means false, the two words are not anagrams
    }
    return 1; // 1 means true, the two words are anagrams
}
