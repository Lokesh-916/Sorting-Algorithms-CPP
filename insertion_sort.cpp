#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,5,1,4,2,7,0};
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(auto it:arr){
        cout<< it << ' ';
    }


    return 0;
}