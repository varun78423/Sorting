#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		int ind=i;
		for(int j=i+1;j<n;j++){
			if(arr[ind]>arr[j]) ind=j;
		}
		if(ind!=i){
			swap(arr[i],arr[ind]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	selectionSort(arr);
	for(auto &it:arr) cout<<it<<" ";
}