#include<bits/stdc++.h>
using namespace std;
// take the pivot ele and put it in its accurate place 
// such that all elements on left are smaller and on right are larger.
int quicksort(int low,int high,vector<int>&arr){
	int i=low,j=high;
	int pivot=arr[low];
	while(i<=j){
		while(arr[i]<=pivot) i++;
		while(arr[j]>pivot) j--;
		if(i<=j) swap(arr[i],arr[j]);
	}
	swap(arr[j],arr[low]);
	return j;
}
void quick(int low,int high,vector<int>&arr){
	if(low>=high) return;
	int ppos=quicksort(low,high,arr);
	quick(low,ppos-1,arr);
	quick(ppos+1,high,arr);
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	quick(0,n-1,arr);
	for(auto &it:arr) cout<<it<<" ";
}