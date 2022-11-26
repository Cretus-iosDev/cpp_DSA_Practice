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
    while(col<=n){
      
      //formula
      char ch = 'A' + col - 1; //using type casting method
      cout<<ch<<" ";
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
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 
*/