#include<stdio.h>
int main(){
    int i,n,count=0;
     int ages[n];
    printf("number of voter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ages[i]);
    }
    int eligable;
    for(i=0;i<n;i++){
            if(ages[i]>=18){
                eligable=ages[i];
                count++;

            }
    }
    printf("Eligible voters: %d", count);


}
