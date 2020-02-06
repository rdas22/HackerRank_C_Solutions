#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int b[num],j;
    for(i=0,j=num-1;i<num;++i,--j)
        b[j] = arr[i];
    for(i=0;i<num;++i)
        arr[i] = b[i];

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

