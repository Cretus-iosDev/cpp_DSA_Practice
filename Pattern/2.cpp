#include <bits/stdc++.h>
using namespace std;

int main(){
  //Patterns

  int n;
  cin>>n;

  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<i;
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  return 0;

}

/*
i=row, j=column

OUTPUT:-
1111
2222
3333
4444
*/