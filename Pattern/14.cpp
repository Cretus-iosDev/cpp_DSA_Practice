#include <bits/stdc++.h>
using namespace std;

int main()
{
   //Patterns

  int n;
  cin>>n;

  int i=1;
  while(i<=n){
    int j=1;
    while(j<=i){
      
      //formula
      char ch = ('A' + i + j - 2);
      cout<<ch<<" ";

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
A 
B C 
C D E 
D E F G 
*/