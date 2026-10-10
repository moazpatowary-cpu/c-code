#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    int elements[n];
    printf("the elements are: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &elements[i]);
    }
    int smallest = elements[0];
    for (i = 0; i < n; i++)
    {
        if (elements[i] < smallest)
        {
            smallest = elements[i];
        }
    }
    printf("%d is the smallest number!", smallest);
    return 0;
}