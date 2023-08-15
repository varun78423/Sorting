#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//insertion sort
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	int i=1;
	while(i<n){
		int j=i-1;
		int t=arr[i];
		while(j>=0){
			if(arr[j] > t){
				arr[j+1]=arr[j];
				arr[j]=t;
			}
			j--;
		}
		i++;
	}
	for(auto &it:arr) cout<<it<<" ";
}