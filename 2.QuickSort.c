#include<stdio.h>
int arr[10];
int i,n=6;

void prinf(){
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void swap(int a, int b){
    printf("Before A: %d B: %d \n",a,b);
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    printf("Swapped.! \n");
    printf("After A: %d B: %d",a,b);
}

void pivot(){
    int p=arr[0],f=1,l=5,i=0;
    while(f!=l){
    // for(i=0;i<n;i++){
        printf("\n\nPass %d\n\n",i);
        if(p<arr[f]){swap(p,f);}
        if(p>arr[l]){swap(p,l);}
        i++;f++;l--;
        prinf();
    // }
    }
    int temp = arr[0];
    for(i=0;i<f;i++){
        arr[i]=arr[i+1];
    }
    arr[f]=temp;
    // for(i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }
}

int main(){
    printf("Enter 6 elements.:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pivot();
    prinf();
    // printf("\n");
    // for(i=0;i<n;i++){
    //     printf("%d\t",arr[i]);
    // }
    return 0;
}