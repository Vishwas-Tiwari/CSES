#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int fun(int n , vector<int>&applicant,vector<int>&apartment , int k ,int m){
    int i=0;
    int j=0;
    int ans=0;
    while(i < n && j < m) {

    if(abs(applicant[i] - apartment[j]) <= k) {
        ans++;
        i++;
        j++;
    }
    else if(apartment[j] < applicant[i] - k) {
        j++;
    }
    else {
        i++;
    }
  }
    return ans;
}

int main() {
   int n,m,k;
   cin>>n>>m>>k;
   vector<int>applicant(n);
   vector<int>apartment(m);
   for(int i=0 ; i<n ; i++){
      cin>>applicant[i];
   }
   for(int i=0 ; i<m ; i++){
      cin>>apartment[i];
   }
    sort(applicant.begin(),applicant.end());
    sort(apartment.begin(),apartment.end());
   int ans=fun(n,applicant,apartment,k,m);
   cout<<ans<<endl;
    return 0;
}