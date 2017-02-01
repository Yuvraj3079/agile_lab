#include<stdio.h>

void quick_sort(int *arr,int lb, int ub)
{
    if(lb<ub)
    {int p= partition_a(arr,lb,ub);
    quick_sort(arr,lb,p-1);
    quick_sort(arr,p+1,ub);
    }
}
int partition_a(int *arr,int beg,int end)
{
    int left = beg;
    int right = end;
    int pivot = arr[beg];
    while(left < right)
    {
        while(arr[left]<=pivot)
        {
            left++;
        }
        while(arr[right]>pivot)
        {
            right--;
        }
        if(left < right)
        {
            int temp = arr[left];
            arr[left]=arr[right];
            arr[right] = temp;
        }
    }
    arr[beg] = arr[right];
    arr[right] = pivot;
    return right;
}


int main()
{
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    int array[size];
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    quick_sort(array,0,size-1);
    printf("after sorting\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
