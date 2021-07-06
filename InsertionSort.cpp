#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n){
    for(int i=1;i<=n-1;i++){
        int curr = a[i];
        int j=i-1;
        while(a[j] > 0 && a[j] >curr){
            a[j] = a[j+1];
            j=j-1;
        }
        a[j+1] = curr;
    }

}
