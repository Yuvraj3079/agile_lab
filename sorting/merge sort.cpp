#include<bits/stdc++.h>
using namespace std;

int c[5];

void merge(int arr[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid;
    int k=lb;
    while(i<mid&&j<=ub)
    {
        if(arr[i]<arr[j])
        {
            c[k]=arr[i];
            k++;
            i++;
        }
        else
        {
           c[k]=arr[j];
           k++;
           j++;
        }

    }

    while(i<mid)
 {
     c[k]=arr[i];
     k++;
     i++;
 }
 while(j<=ub)
 {
     c[k]=arr[j];
     k++;
     j++;
 }
 for(int n=0;n<k;n++)
 {
     arr[n]=c[n];
 }
}


void merge_sort(int arr[],int lb, int ub)
{
    if(lb<ub)
    {
        int mid=(ub+lb)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid+1,ub);
    }

}


int main()
{


    int a_s[5]={53,88,35,27,16};
    for(int i=0;i<5;i++)
    {
        cout<<a_s[i]<<endl;
    }
    merge_sort(a_s,0,4);
    cout<<"after sorting..."<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a_s[i]<<endl;
    }

}
