#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	sort(arr, arr+n);
	int l=0;
	int r=n-1;
	int sum;
	while(l<r){
		sum = arr[l]+arr[r];
		if(sum == key){
			cout<<arr[l]<<" and "<<arr[r]<<endl;
			l++;
		}
		else if(sum>key)
			r--;
		else if(sum<key)
			l++;
		
	}
	return 0;
}
