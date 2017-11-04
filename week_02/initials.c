#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(void){

    string s = get_string("enter full name: ");
    int length = strlen(s);

    for(int i = 0; i < length; i++){
        if(i == 0){
            printf("%c",toupper(s[i]));
        }

        if(s[i] == ' '){
            printf("%c",toupper(s[i+1]));
        }
    }

    printf("\n");
}