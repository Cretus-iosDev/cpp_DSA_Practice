#include <bits/stdc++.h>
using namespace std;

int main()
{
   //Patterns
  int n;
  cin>>n;

  int i=1;
  while(i<=n)
  {
    //print space
    int space = n -i;
    while(space) {
      cout<<" ";
      space = space - 1 ;
    }

    //print start
    int j = 1;
    while(j<=i)
    {
      cout<<"*";
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
    *
   **
  ***
 ****
*****
*/