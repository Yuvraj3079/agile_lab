#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        int v = a[i];
        j=i;
        while(a[j-1]>v && j>=0)
        {
            a[j] = a[j-1];
            j--;
        }
        a[j+1] = v;
    }
     printf("after sorting\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    int arr[5] = {88,65,1,87,96};
    int i;
    for(i=0;i<5;i++)
    {
       printf("%d\n",arr[i]);
    }
    insertion_sort(arr,5);

    return 0;
}
