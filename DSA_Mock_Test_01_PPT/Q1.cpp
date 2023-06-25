#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int i=0;
    int j=n-1;int c=0;
    while(i<=j){
        if(arr[i]==0 && arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]==0 && arr[j]==0)
        j--;
        if(arr[i]!=0 && arr[j]==0)
        i++;
        if(arr[i]!=0 && arr[j]!=0)
        i++;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}