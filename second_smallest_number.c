#include<stdio.h>
int main(){
    int i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    int elements[n];
    printf("the elements are: ");
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
    int smallest;
    int second;
    smallest=second=elements[0];
    for(i=0;i<n;i++){
        if(elements[i]>smallest){
            second=smallest;
            smallest=elements[i];
        }
        else if(elements[i]>smallest && elements[i]<second){
            second=elements[i];

        }
    }
    printf("%d is the second smallest number!", second);
    return 0;
}
    

    