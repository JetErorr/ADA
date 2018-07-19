#include<stdio.h>
int ele[7];
int i,j,n=7;
void swap(int a,int b){
    int temp = ele[a];
    ele[a]=ele[b];
    ele[b]=temp;
    printf("\nSwapped %d and %d: ",ele[a],temp);
    for(i=0;i<n;i++)
    {
        printf("%d \t",ele[i]);
    }
}
int main(){
    printf("Enter 7 elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ele[i]);
    }
    printf("You entered the elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d \t",ele[i]);
    }
    
    return 0;
}