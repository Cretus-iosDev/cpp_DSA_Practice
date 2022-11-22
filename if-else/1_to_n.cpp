#include <bits/stdc++.h>
using namespace std;

int main(){
/*
    //Print 1 to n
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
      cout<<i<<" ";
      i=i+1;
    }
*/
  //Sum 1 to n
  int n;
  cin>>n;

  int i=1;
  int sum=0;
  while(i<=n){
    sum=sum+i;
    i=i+1;
  }

  cout<<"value of sum is:- "<<sum<<endl;
    
    return 0;

}