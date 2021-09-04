#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    double  n,l;
    cin>>n>>l;
    vector<double >a;
    for(int i =0;i<n;i++){
        int e;
        cin>>e;
        a.push_back(e);
    }
    sort(a.begin(),a.end());
   double max_d =0;
   for(int i =0;i<n-1;i++){
       max_d =max(max_d,a[i+1]-a[i]);
   }
 double d=0;
   if(a[0]==0 && a[n-1]==l){
       d= max_d/2;
 
   }
   else if(a[0]!=0 && a[n-1]==l ){
       d =max_d/2;
 
        d =max(d,a[0]);
 
   }
   else if(a[n-1]!=l &&a[0]==0){
       d =max_d/2;
 
       d=max(d,l-a[n-1]);
   }
   else if(a[n-1]!=l &&a[0]!=0){
        d =max_d/2;
        //cout<<d;
if(max(a[0],l-a[n-1])>d){
     d= max(a[0],l-a[n-1]);
}
   }
  cout << setprecision(9) << fixed << (double)d << endl;
}