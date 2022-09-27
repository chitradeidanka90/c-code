// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n= mid-l+1;
    int m=r-mid;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
      a[i]=arr[l+i];
    for(int i=0;i<m;i++)
      b[i]=arr[mid+1+i];
      
      int i=0;
      int j=0;
      int k=l;
      while(i<n && j<m){
          if(a[i]<b[j]){
              arr[k]=a[i];
              k++;
              i++;
          }else{
              arr[k]=b[j];
              k++;
              j++;
          }
      }
      while(i<n){
          arr[k]=a[i];
              k++;
              i++;
      }
      while(j<m){
          arr[k]=b[j];
              k++;
              j++; 
      }
}

void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        
        merge(arr,l,mid,r);
    }
}

int main() {
     int arr[]={5,4,3,2,1};
     mergeSort(arr,0,4);
     for(int i=0;i<5;i++)
      cout<<arr[i]<<" ";
}