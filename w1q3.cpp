#include<iostream>
#include<vector>
using namespace std;
string reverses(string &s)
{
    int n = s.length();
    string rev ="";
    for(int i=n-1;i>=0;i--){
        rev +=s[i];
    }
    return rev;
}
int main()
{
    string s;
    string rev;
    cout<<"enter string ";
    cin>>s;
    rev = reverses(s);
    cout<<rev;
}
