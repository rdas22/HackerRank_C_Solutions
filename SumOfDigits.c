#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int i,sum=0,r;
    for(i=0i;i<5;++i)
    {
        r = n%10;
        sum+=r;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}

