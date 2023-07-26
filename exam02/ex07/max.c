/*
Write the following function:
int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.
*/
#include <stdio.h>
#include <unistd.h>

int max(int *tab, unsigned int len)
{
    if(tab == 0)
        return 0;
    
    int i = 0;
    int largest = 0;
    while(i < len)
    {  
        if(tab[i] > largest)
            largest = tab[i];
        i++;    
    }
    return largest;
}

int main()
{
    int arr[] = {12, 43, 35, 23, 59, 72, 1, 69};
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Largest = %d\n", max(arr, len));
    return 0;
}
