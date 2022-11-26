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
        //formula
        char ch='A'+i-1;  //using type casting method
        int j=1;
        while(j<=n)
        {
            cout << ch << " " ;
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    }
}

/*
i=row, j=column

OUTPUT:-
A B C D 
B C D E 
C D E F 
D E F G 
*/