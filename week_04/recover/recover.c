#include <stdio.h>
#include <cs50.h>
#include "bmp.h"

int main()
{
    FILE* fileOpen = fopen("card.raw", "r");
    if(fileOpen == NULL)
    {
        printf("No file.\n");
        return 0;
    }
    BYTE buffer[512];
    bool isFound = false;
    FILE* newjpeg;
    int fileCounter = 0;

    while (fread(buffer,1,512,fileOpen) != 0x00)
    {
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] &0xf0) == 0xe0)
        {
            if(!isFound)
            {
                isFound = true;

                char fileName[8];
                sprintf(fileName,"%03i.jpg" , fileCounter++);
                newjpeg = fopen(fileName,"w");
                if(newjpeg == NULL)
                {
                    return 2;
                }
                fwrite(buffer,1,512,newjpeg);
            }
            else
            {
                fclose(newjpeg);

                char fileName[8];
                sprintf(fileName,"%03i.jpg" , fileCounter++);
                newjpeg = fopen(fileName,"w");
                if(newjpeg == NULL)
                {
                    return 2;
                }
                fwrite(buffer,1,512,newjpeg);
            }
        }
        else
        {
            if(isFound)
            {
                 fwrite(buffer,1,512,newjpeg);
            }
        }
    }
    fclose(newjpeg);
    fclose(fileOpen);
    return 0;
}