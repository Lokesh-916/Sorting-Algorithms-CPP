#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr={3,5,1,4,2,7,0};
    int n=arr.size();
    for(int i=n-1;i>0;i--){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(auto it:arr){
        cout<< it << ' ';
    }

    return 0;
}