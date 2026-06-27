#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int fun(int n , vector<int>arr){
    if(n==0) return 0;
    sort(arr.begin(),arr.end());
    int count=1;
    int curr=arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]!=curr){
            curr=arr[i];
            count++;
        }
    }
    return count;
}

int main() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0 ; i<n ; i++){
      cin>>arr[i];
   }
   int ans=fun(n,arr);
   cout<<ans<<endl;
    return 0;
}