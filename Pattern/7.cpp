#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //Patterns

  int n;
  cin>>n;

  int row=1;
  int count = 1;

  while(row<=n){
    int col=1;
    while(col<=row){
      
      //formula
      cout<<row;
      col = col + 1;
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
22
333
4444


*/