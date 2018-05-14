//
//  anagram.c
//  
//
//  Created by Chris Becker on 2/28/18.
//

#include "stdio.h"

int main(void){
    
    int arr[26] = {0};
    int count = 0;
    char ch;
    
    
    printf("Enter a word : ");
    
    while( (ch = getchar() ) != '\n' ){
        arr[ch - 'a']++;
    }
    
    
    printf("Enter a another word : ");
    
    while( (ch = getchar() ) != '\n' ){
        arr[ch - 'a']--;
    }
    
    
    for(int i = 0; i < 26; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    
    if(count == 26){
        printf("the words you entered are anagrams \n");
    }
    else{
        printf("the words you entered are not anagrams \n");
    }
    
    return 0;
    
}
