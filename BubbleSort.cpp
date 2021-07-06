#include<bits/stdc++.h>
using namespace std;

void Bubblesort(int a[],int n){
    for(int itr = 1;itr<=n-1;itr++){
        for(int j=0;j<=n-itr-1;j++){
            if(a[j] < a[j+1])
                swap(a[j],a[j+1])
        }
    }

}
