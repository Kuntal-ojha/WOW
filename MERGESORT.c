#include<stdio.h>
#define MAX 50
void mergesort(int [],int,int,int);
void partition(int [],int,int);
int main()
{
    int merge[MAX],i,n;
    printf("Enter the total number of elements:");
    scanf("%d",&n);
    printf("Enter the elements which will be sort: ");
    for(i=0;i<n;i++)
        scanf("%d",&merge[i]);

    partition(merge,0,n-1);
    printf("After merge sorting elements are: ");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d",merge[i]);
    }
}
void partition(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        printf("\n%d %d %d\n",low,high,mid);
        partition(arr,low,mid);
        partition(arr,mid+1,high);
        mergesort(arr,low,mid+1,high);
    }
}
void mergesort(int arr[],int low,int mid,int high)
{
    int i,p1,p2,p3,temp[MAX];
    p1=low;
    p2=mid;
    p3=low;
    while(p1<mid&&p2<=high)
    {
        if(arr[p1]<=arr[p2])
        {
            temp[p3]=arr[p1];
            p1++;
        }
        else
        {
            temp[p3]=arr[p2];
            p2++;
        }
        p3++;
    }
    while(p1<mid)
    {
        temp[p3]=arr[p1];
        p1++;p3++;
    }
    while(p2<=high)
    {
        temp[p3]=arr[p2];
        p2++;p3++;
    }
    for(i=low;i<p3;i++)
    {
        arr[i]=temp[i];
    }
}
