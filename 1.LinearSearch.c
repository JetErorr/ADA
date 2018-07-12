#include<stdio.h>
int main(){
    int search,arr[30],i=0,flag=1;
    printf("Enter 30 elements to be entered into the search array:");
    for(i = 0; i < 30; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched.!");
    scanf("%d",&search);
    for(i=0;i<30;i++)
    {
        if (arr[i]==search) {
            printf("Your element was found.! It is at the location number %d in the search array.!\n",i);
            flag=0;
    }
    }
    if(flag==1){
        printf("Your element was not found in the search array.");
    }
    return 0;
}