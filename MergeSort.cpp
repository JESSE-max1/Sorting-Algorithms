#include<bits/stdc++.h>
using namespace std;


void merge(int *a,int s, int e){

    int mid = (s+e)/2;
    int i = s,j=mid+1,k=s;
    int temp[100];
    while(i <= mid && j<=e){
        if(a[i] < a[j]){
            temp[k++] = a[i++];
        }
        else{
            temp[k++] = a[j++];
        }
    }
    while(i <= mid){
        temp[k++] = a[i++];
    }
    while(j <= e){
        temp[k++] = a[j++];
    }

    for(int i=0;i<=e;i++){
        a[i] = temp[i];
    }
}


void mergesort(int a[],int s,int e){

    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);
    merge(a,s,e);

}

int main(){
    int a[] = {1,5,8,10,6,2};
    int n = sizeof(a)/sizeof(a[0]);
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] <<" " << endl;
    }
    return 0;
}
