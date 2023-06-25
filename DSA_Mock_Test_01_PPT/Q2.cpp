#include <bits/stdc++.h> 
using namespace std;

int main() {
	// Your code here
    string str;
    cin>>str;
    int n= str.length()-1;

   // unordered_map<char,int>umap;
 // i am going to solve this problem through brute force approach because i have not tought hashmap yet.
   int flag=0;
   int f=0;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(str[i]==str[j])
        {
            flag=1;
            break;
        }
    }if(flag==0)
    {
        cout<<str[i]<<endl;
        f=1;
        break;
    }
   }
   if(f==0)
    cout<<"-1"<<endl;

    return 0;
}