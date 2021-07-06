#include <bits/stdc++.h>
using namespace std;

int partion(int *a,int s,int e){

    int i = s-1;
    int j = s;
    int pivot = a[e];
    for(;j<=e-1;){
        if(a[j] <= pivot){
            i=i+1;
            swap(a[i],a[j]);
        }
        j=j+1;
    }
    swap(a[i+1],a[e]);
    return i+1;
}


void quicksort(int a[],int s,int e){
    if(s >=e){
        return;
    }
    int p = partion(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);

}

int main(){
    int a[] = {1,5,8,10,6,2};
    int n = sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] <<" " << endl;
    }
    return 0;
}
