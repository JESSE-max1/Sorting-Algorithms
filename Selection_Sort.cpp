#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j] <a[min] ){
                min = j
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
