/*
Write the following function:
int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.
*/
#include <stdlib.h>
#include <unistd.h>

int *ft_rrange(int start, int end)
{
    int *r;
    int len;

    if (end >= start) 
        len = end - start + 1;
    else 
        len = start - end + 1;
    

    r = (int*)malloc(len * sizeof(int));
    if (r == 0) 
        return 0;

    while (len--) 
    {
        if (end >= start) 
            r[len] = start++;
        else 
            r[len] = start--;
    }
    return r;           
}

int main(int argc, char **argv)
{
    if (argc != 3)
        return 0;

    int start = atoi(argv[1]);
    int end = atoi(argv[2]);

    int *range = ft_rrange(start, end);

    int i = 0;
    while (i < abs(start - end) + 1)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
    free(range);

    return 0;
}
