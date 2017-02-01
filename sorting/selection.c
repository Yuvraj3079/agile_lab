#include<stdio.h>
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void selection(int *arr,int lb,int ub)
{    int j,i;
    for( j=0;j<ub;j++)
    {
        int temp=j   ;
        int min=arr[j];
        for( i=j+1;i<=ub;i++)
        {
            if(arr[i]<min){
                min=arr[i];
                temp=i;
            }
        }
        swap(&arr[j],&arr[temp]);
    }
}
int main()
{
    int array[]={5,4,3,2,1};
    int i;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",array[i]);
    }
    selection(array,0,4);
    printf("after sorting\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
