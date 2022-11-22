#include <bits/stdc++.h>
using namespace std;

int main(){

//Prime or Not
  int n;
  cin>>n;

  int i=2;
  while(i<n){
    //divide , not prime
    if(n%i==0){
      cout<<"not prime for - "<< i <<endl;
    }
    else{
      cout<<"Prime for - "<< i <<endl;
    }
    i=i+1;
  }

    
  return 0;

}