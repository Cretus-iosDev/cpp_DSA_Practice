#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //Patterns

  int n;
  cin>>n;

  int row=1;


  while(row<=n){
    int col=1;
    int value = row;
    while(col<=row){
      
      //formula
      cout<<value;
      value = value + 1;
      col = col  + 1;
      
    }
    cout<<endl;
    row=row+1;
  }
  return 0;

}

/*
i=row, j=column

OUTPUT:-
1
23
345
4567
*/