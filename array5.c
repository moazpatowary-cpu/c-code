/* Problem 5: Sum and Product Comparison
Read an array and:
a) Find the sum and product of even elements
b) Find the sum and product of odd elements
c) Find the sum of positive and negative elements
d) Compare the results and print which value is larger?*/
#include<stdio.h>
int main(){
    int i,n;
    int elements[10];
    long long product=1;
    int sum=0;
    int even_sum=0;
    long long even_product=1;
    int odd_sum=0;
    long long odd_product=1;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&elements[i]);
    }
        printf("even numbers: ");
    for(i=0;i<n;i++){
            if(elements[i]%2==0){
            printf("%d ", elements[i]);
            even_sum+=elements[i];
            even_product*=elements[i];
    }
    }
    printf("\nodd numbers: ");
    for(i=0;i<n;i++){
            if(elements[i]%2!=0){
            printf("%d ", elements[i]);
            odd_sum+=elements[i];
            odd_product*=elements[i];
    }
    }
    printf("\nsum of even: %d\n", even_sum);
    printf("sum of odd:%d\n", odd_sum);
    printf("product of even:%lld\n", even_product);
    printf("product of odd:%lld\n", odd_product);
    if(even_sum > odd_sum)
        printf("even is larger than odd\n");
    else
        printf("odd is largr than even");
}


