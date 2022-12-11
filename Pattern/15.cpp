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
    char ch = 'A' + n - i; //using type caste
    while(j<=i){
      
      //formula
      cout<<ch<<" ";
      ch=ch+1;

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
D 
C D 
B C D 
A B C D 
*/