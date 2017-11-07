#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    if( argc == 2){
        string key = argv[1];
        int length = strlen(key);

        for( int i = 0; i < length; i++){
            if(isalpha(key[i]) == false){
                return 1;
            }
            if(key[i] >= 'a' && key[i] <= 'z'){
                key[i] = key[i] - 97 ;
            } else if (key[i] >='A' && key[i] <= 'Z'){
                key[i] = key[i] - 65 ;
            }
        }

        string plainText = get_string("Plain Text: ");
        int stringLength = strlen(plainText);
        printf("ciphertext: ");

        for ( int i = 0, j = 0; i< stringLength; i++){
            if (plainText[i] >='a' && plainText[i] <= 'z'){
                printf("%c", ((((plainText[i] + key[j]) - 97) % 26) + 97));
                j++;
            } else if (plainText[i] >='A' && plainText[i] <= 'Z'){
                printf("%c", ((((plainText[i] + key[j]) - 65) % 26) + 65));
                j++;
            } else {
                printf("%c",plainText[i]);
            }
            if(j == length){
                j = 0;
            }
        }
        printf("\n");
    }

    else {
        printf ( "Trying Again !\n");
        return 1;
    }
}