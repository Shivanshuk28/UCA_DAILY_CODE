#include <stdio.h>
#include <stdlib.h>

void *calloc_using_malloc(int n)
{
	char *arr = (char *)malloc(n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = '\0';
	}
	return (void *)arr;
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr=calloc_using_malloc(n);
    printf("memmory allocated is %d",arr);
    return 0;
}