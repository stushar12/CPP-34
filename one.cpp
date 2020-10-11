#include<bits/stdc++.h>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    int n;
    cin>>n;
    vector<int> v;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=n-1;
    v.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=arr[max])
        {
        v.push_back(arr[i]);
        max=i;
    }
    }
    for(auto itr=prev(v.end());itr!=prev(v.begin());itr--)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    
}
}
