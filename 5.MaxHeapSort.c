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

int heap(i,j){
    int ans[j] = ele[i];
    int ans[j+1] = ele[i+1];
    int ans[j+2] = ele[i+2];
    if(i+3!=7){
        heap(i+3,j+3)
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
    heap();
    return 0;
}