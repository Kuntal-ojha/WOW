// Write a program to developed a Binary Search.
// Created by KUNTAL OJHA RAJ on 12/27/2020.
// Date Structures Binary Search.
#include <stdio.h>
void Binary_Search(int [],int,int);
int main()
{
    int i,n,a[10],item;
    printf("\nEnter the number of element =10:\n");
    scanf("%d",&n);
    printf("Enter the value in shorted sequentially.\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search element:\n");
    scanf("%d",&item);
    Binary_Search(a,n,item);
}
void Binary_Search(int x[],int n,int item)
{
    int beg,end,mid;
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while (beg<=end && item!=x[mid])
    {
        if (item>x[mid])
        {
            beg=mid+1;
        } else
        {
            end=mid-1;
        }
        mid=(beg+end)/2;
    }
    if (item==x[mid])
    {
        printf("The search is successful and the element is found at the position %d",mid+1);
    } else
    {
        printf("\nThe search is unsuccessful.");
    }

}