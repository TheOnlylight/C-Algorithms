#include <iostream>
using namespace std;
int n,k1;
int f[100001],d[100001];
int find(int k)
{
    if(f[k]==k)
     return k;
    int t;
    t=f[k];
    f[k]=find(t);
    d[k]=(d[k]+d[t])%3;
    return f[k];
}
int main()
{
    int fx,fy;
    cin>>n>>k1;
    for(int i=1;i<=n;i++) 
    {
       f[i]=i;
       d[i]=0;
    }
    int t,x,y;
    int ans=0;
    for(int i=1;i<=k1;i++)
    {
        scanf("%d %d %d",&t,&x,&y);
        if(x==y&&t==2)
         ans++;
        else
        {  
          if(x>n||y>n)
            ans++;
          else
          {
            fx=find(x),fy=find(y);
            if(fx!=fy) 
            {
                f[fy]=fx;
                d[fy]=(d[x]-d[y]+t+2)%3;
            }
            else
            {
                if((d[y]-d[x]+3)%3!=t-1)
                  ans++;
            }
          }
        }
    }
    cout<<ans;
}
