//
//  anagram.c
//  
//
//  Created by Chris Becker on 2/28/18.
//

#include "stdio.h"


int main(void){
    //set up variables
    int arr[26] = {0};
    int count = 0;
    char ch;
    
    //prompy user for input
    printf("Enter a word : ");
    
    //adds the numeric character value to the array of ints until they press enter
    while( (ch = getchar() ) != '\n' ){
        arr[ch - 'a']++;
    }
    
    //subtracts the numeric character value from the array.
    printf("Enter a another word : ");
    
    while( (ch = getchar() ) != '\n' ){
        arr[ch - 'a']--;
    }
    
    
    for(int i = 0; i < 26; i++){
        //an array value of 0 means the same character was added and subtracted
        if(arr[i] == 0){
            count++;
        }
        
    }
    //results
    if(count == 26){
        printf("the words you entered are anagrams \n");
    }
    else{
        printf("the words you entered are not anagrams \n");
    }
    
    return 0;
    
}
