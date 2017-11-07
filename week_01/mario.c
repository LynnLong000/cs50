#include <cs50.h>
#include <stdio.h>

int main (void){
    int height = get_int("Get height of mario's pyramid: ");
    int hash = 1;
    int space = 0;

    if ( height < 24 && height > 0){
        space = height - hash;
        for(int i = 0; i < height; i++){
            for (int j = 0; j < space; j++){
                printf(" ");
            }

            for (int j = 0; j < hash; j++){
                printf("#");
            }

            printf("  ");

            for(int j = 0; j < hash; j++){
                printf("#");
            }

            printf("\n");
            hash++;
            space--;
        }
    } else if (height < 0){
        printf("wrong");
    } else if (height > 23){
        height = height / 10;
        space = height - hash;
        for(int i = 0; i < height; i++){
            for (int j = 0; j < space; j++){
                printf(" ");
            }

            for (int j = 0; j < hash; j++){
                printf("#");
            }

            printf("  ");

            for(int j = 0; j < hash; j++){
                printf("#");
            }

            printf("\n");
            hash++;
            space--;
        }
    }
}