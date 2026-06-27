#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0 ; i<n ; i++) cin>>v[i];

    sort(v.begin(),v.end());

    vector<int>c(m);
    for(int i=0 ; i<m ; i++) cin>>c[i];
    
    int j=0;
   
    for(int i=0 ; i<m ; i++){
            int ans=-1;
            while(j<n){
            if(c[i]>v[j]){
               break;
            }
            else if(c[i]==v[j]){
                ans=v[j];
                j++;
                break;
            }
            else{
                ans=v[j];
                j++;
            }
        }
         (ans!=-1) ? cout<<ans<<endl : cout<<-1<<endl;
         i++;
    }
    return 0;
}