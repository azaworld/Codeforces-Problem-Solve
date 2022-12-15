#include<iostream>
#include<algorithm>
using namespace std;
int mass[6000],d[6000][6000];
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>mass[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            d[i][j]=d[i][j-1]+(mass[j]<mass[i]);
        }
    }
    int l=0;
    for(i=1;i<=n;i++)
    {
        l+=d[i][n]-d[i][i];
    }
    int m=1000000000,c=0;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            int a,b,f;
            a=d[i][n]-d[i][j-1];
            b=d[j][n]-d[j][i];
            f=l-d[i][n]+d[i][i]-d[j][n]+d[j][j]+a+b;
            a=(i-j-1-d[i][i-1]+d[i][j]);
            b=(i-j-1-d[j][i-1]+d[j][j]);
            f=f-a+b;
            if(f<m){m=f;c=1;}
            else if(f==m){c++;}
        }
    }
    cout<<m<<" "<<c<<endl;
    return 0;
}
