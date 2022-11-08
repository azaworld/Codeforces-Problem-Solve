#include<iostream>
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int gz = 0,go=0;

        if(s[0] == '0'){
            gz++;
        }else{
            go++;
        }

        for(int i=1;i<s.size();i++){

            if(s[i] == '0'){

                if(s[i-1] == '1'){
                    gz++;
                }

            }else{

                if(s[i-1] == '0'){
                    go++;
                }

            }

        }

        if(gz == 0){
            cout<<0<<endl;
        }else if(go == 0){
            cout<<1<<endl;
        }else{
            if(gz == 1){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }

    }

    return 0;
}
