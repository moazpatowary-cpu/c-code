#include<stdio.h>
int main(){
    int i,n;
    int elements[n];
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d", &elements[i]);
    }
        printf("orginal numbrs: ");


    for(i=0;i<n;i++){
        printf("%d ", elements[i]);
    }
        printf("\nreverse numbrs: ");



     for(i=n-1;i>=0;i--)
            printf("%d ", elements[i]);
     return 0;
}
