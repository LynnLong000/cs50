#include <cs50.h>
#include <stdio.h>

int main (void){
    printf("Get height of mario's pyramid: ");
    int height = get_int();
    int hash = 1;
    int spots = 1 + height;
    int space = spots - hash;

    if ( height < 23 && height > 0){
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

            printf(" \n");
            hash++;
            space--;
        } else {
            printf("try again!!");
        }
    }
}