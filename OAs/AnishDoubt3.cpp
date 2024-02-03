#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<char> vec;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            vec.push_back(s[i]);
        }
    }
    char arr[123]={0};
    int count=0;
    for (int i = 0; i < vec.size(); i++)
    {
        if(arr[vec[i]]==0 && vec[i]!=' ')
        {
            arr[vec[i]]=1;
            count=count+1;
        }
    }
    cout<<count<<endl;
return 0;
}
