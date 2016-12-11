#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sortit(char **sourceArr, int startIndex, int endIndex) {
    if(startIndex >= endIndex)
    {
        return ;
    }
    int i = startIndex;
    int j = endIndex;
    char *key = sourceArr[startIndex];
    
    while(i < j)
    {
        while(i < j && key[0] <= sourceArr[j][0])
        
         
        {
            j--;
        }
        
        sourceArr[i] = sourceArr[j];
        
         
        
        while(i < j && key[0] >= sourceArr[i][0])
        
         
        {
            i++;
        }
        
        sourceArr[j] = sourceArr[i];
    }
    
    sourceArr[i] = key;
    sortit(sourceArr, startIndex, i - 1);
    sortit(sourceArr, i + 1, endIndex);
    
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
    
    sortit(Array, 0, len-1);
    
    printf("after sorting\n");
    for (i = 0; i < len; i++)
        
    printf("%s\n", Array[i]);
    
    
    
    for (i = 0; i < len; i++)
        
    free(Array[i]);
    
    
    
    free(strlen);
    
    free(Array);
    
    
    
    return 0;
    
}
