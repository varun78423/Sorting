#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    int n=arr.size();// sorts from back
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    bubbleSort(arr); 
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}