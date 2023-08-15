#include<bits/stdc++.h>
using namespace std;
void mergesort(int low,int mid,int high,vector<int>&arr){
	vector<int>temp;
	int i=low,j=mid+1;
	while(i<=mid && j<=high){
		if(arr[i]>arr[j]){
			temp.push_back(arr[j]);
			j++;
		}
		else{
			temp.push_back(arr[i]);
			i++;
		}
	}
	while(i<=mid){
		temp.push_back(arr[i]);
		i++;
	}
	while(j<=high){
		temp.push_back(arr[j]);
		j++;
	}
	int v=0;
	for(int i=low;i<=high;i++){
		arr[i]=temp[v];
		v++;
	}
}
void merge(int low,int high,vector<int>&arr){
	if(low>=high) return;
	int mid=(low+high)/2;
	merge(low,mid,arr);
	merge(mid+1,high,arr);
	mergesort(low,mid,high,arr);
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	merge(0,n-1,arr);
	for(auto &it:arr) cout<<it<<" ";
}