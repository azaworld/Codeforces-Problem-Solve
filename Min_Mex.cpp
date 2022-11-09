#include <iostream>
using namespace std;
//int dy[] = {0,1,0,-1};

int main() {
   int t;
   cin>>t;
   while(t--)
   {
     string s;
     cin>>s;
     int cnt=0;
     for(int i=0;i<s.size();i++)
     {
       if(s[i]=='0')
       {
         cnt++;
         while(s[i]=='0'&& i<s.size())i++;
       }
     }
     if(cnt<2)cout<<cnt<<endl;
     else cout<<2<<endl;
   }
}
