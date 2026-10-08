/*a) The number of positive, negative,zero, even and odd elements*/
#include<stdio.h>
int main(){
    int n,i;
    int elements[10];
    printf("enter number of elements: ");
    scanf("%d",&n);
    printf("the elements are: \n");
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    printf("negative numbers:");
    for(i=0;i<n;i++){
        if(elements[i]<0){
                printf("%d ", elements[i]);
    }
    }
    printf("\npositive numbers:");
    for(i=0;i<n;i++){
        if(elements[i]>0){
                printf("%d ", elements[i]);
        }
    }
    printf("\neven:");
    for(i=0;i<n;i++){
        if(elements[i]%2 == 0){
                printf("%d ", elements[i]);
    }
    }
    printf("\n0dd:");
    for(i=0;i<n;i++){
        if(elements[i]%2 != 0){
                printf("%d ", elements[i]);
        }
    }

    }

