#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter your character"<<endl;
    cin>> ch;
    if (ch>='a'&&ch<='z'){
        cout<<"this is lower case";
        
    }
    else if (ch>='A'&&ch<='Z'){
        cout<<"this is upper case";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"this is numeric";
    }
    return 0;

}