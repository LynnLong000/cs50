#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    if( argc == 2){
        string key = argv[1];
        string plainText = get_string("Plain Text: ");
        int stringLength = strlen(plainText);
        int length = strlen(key);

        for( int i = 0; i < length; i++){
            if(key[i] >= 'a' && key[i] <= 'z'){
                key[i] = key[i] - 97 ;
            } else if (key[i] >='A' && key[i] <= 'Z'){
                key[i] = key[i] - 65 ;
            }
        }

        printf("Cipher Text: ");

        for ( int i = 0; i< stringLength; i++){
            if (plainText[i] >='a' && plainText[i] <= 'z'){
                printf("%c", ((((plainText[i] + key[i]) - 97) % 26) + 97));
            } else if (plainText[i] >='A' && plainText[i] <= 'Z'){
                printf("%c", ((((plainText[i] + key[i]) - 65) % 26) + 65));
            } else {
                printf("%c",plainText[i]);
            }
        }
        printf("\n");
    }

    else {
        printf ( "Trying Again !\n");
    }
}