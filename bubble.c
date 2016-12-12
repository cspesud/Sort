#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortit(char **sourceArr,int len) {
    int i,j;
    char *temp;
    for(i=0; i<len-1; i++)
        for(j=i+1; j<len; j++)
            if(sourceArr[i][0] > sourceArr[j][0])
            {
                temp = sourceArr[i];
                sourceArr[i] = sourceArr[j];
                sourceArr[j] = temp;
            }
}

int main(int argc, char **argv)
{
    
    FILE *file;
    if ((file=fopen(argv[2],"r"))==NULL)
    {
        printf("Can't find file\n");
        exit(1);
    }
    
    int len = atoi(argv[1]);
    int count = 0;
    char ch = 0;
    
    do
    {
        ch = fgetc(file);
        if (ch == '\n')
            count++;
    } while (ch != EOF);
    
    if (len > count)
    {
        len = count;
    }
    
    rewind(file);
    
    int *strlen = malloc(sizeof(int) * len);
    
    int i = 0, t = 0, j = 0;
    
    while (j != len)
    {
        ch = fgetc(file);
        t++;
        
        if (ch == '\n')
        {
            strlen[i++] = t;
            t = 0;
            j++;
        }
    }
    
    char **Array = malloc(sizeof(char *) * len);
    
    rewind(file);
    
    int pos = 0, k=0;
    
    while (pos < len)
    {
        Array[pos] = malloc(sizeof(char) * strlen[pos]);
        for (k = 0; k < strlen[pos] - 1; k++) {
            Array[pos][k] = fgetc(file);
        }
        
        ch = fgetc(file);
        Array[pos][k] = '\0';
        pos++;
    }
    
    fclose(file);
    printf("before sorting\n");
    for (i = 0; i < len; i++) 
    {
        printf("%s\n", Array[i]);
    }
    
    sortit(Array, len);
    
    printf("after sorting\n");
    for (i = 0; i < len; i++)
        
        printf("%s\n", Array[i]);
    
    
    
    for (i = 0; i < len; i++)
        
        free(Array[i]);
    
    
    
    free(strlen);
    
    free(Array);
    
    
    
    return 0;
    
}
