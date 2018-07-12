#include<stdio.h>
int ele[10],n=10,i,j,search,f,l,mid;

void swap(int a, int b){
    int temp = ele[a];
    ele[a]=ele[b];
    ele[b]=temp;
    for(i=0;i<n;i++){printf("%d \t",ele[i]);}
}

void binary(){
    f=0;
    l=n-1;
    mid=(f+l)/2;
        while (f<=l) 
        {
        if      (ele[mid] < search)     {f = mid + 1;}    
        else if (ele[mid] == search)    {printf("%d found at location %d.\n", search, mid+1);break;}
        else                            {l = mid - 1;mid = (f + l)/2;}
        }
    if (f > l) {printf("Not found! %d isn't present in the list.\n", search);}
}

int main(){
    printf("Enter %d elements: \n\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&ele[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&search);
    for(i=0;i<n;i++) {
        printf("\nPass: %d",i);
        for(j=i+1;j<n;j++) {
            if(ele[i]>ele[j]) {
                swap(i,j);
            }
        }
    }
    binary();
}