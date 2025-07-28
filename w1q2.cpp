#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int n,sum=0;
    cout<<"total integer"<<endl;
    cin>>n;
    int u;
    for(int i=0;i<n;i++)
    {
        cin>>u;
        a.push_back(u);
        sum+=u;
    }
    cout<<"result "<<sum/n;
}
