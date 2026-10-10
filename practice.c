/*
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
    int j;
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(elements[i]<elements[j]){
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;

            }
        }
    }
    printf("ascending order: ");
    for(i=0;i<n;i++){
        printf("%d ", elements[i]);
    }
    return 0;
}


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
    int j;
    int temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(elements[i]>elements[j]){
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;

            }
        }
    }
    printf("descending order: ");
    for(i=0;i<n;i++){
        printf("%d ", elements[i]);
    }
    return 0;
}*/
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
    int largest=elements[0];
    for(i=0;i<n;i++){
        if(elements[i]> largest){
            largest=elements[i];
        }
    }
    printf("%d is the largest number!", largest);
    return 0;
}
