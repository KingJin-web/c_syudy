#include<iostream>
#include<cmath>
#include <cstring>
using namespace std;

int flag_prime[1100];
int prime[1100/3];
int len;
int numyz;

void get_prime()
{
    int i,j;
    len=0;
    memset(flag_prime,0,sizeof(flag_prime));
    for(i=2;i<1100;i++)
    {
        if(!flag_prime[i])
        {
            prime[len++]=i;

            for(j=i*i;j<1100;j+=i)
            {
                flag_prime[j]=1;
            }
        }
    }
}

void makep(int n)
{
    numyz=1;
 int times;
    int i=0;for (;prime[i]*prime[i]<=n;i++)
    {
        if(n%prime[i]==0)
        {
   times = 0;
            while (n%prime[i]==0)
            {
    n /= prime[i];
                times++;
            }
            numyz *= (times+1);
        }
    }
    if(n>1)
    {
        numyz*=2;
    }
}

const int mod = 10007;
int ttt;
int Pow(int x,int y)
{
    if(y==1) return x%mod;
    if(y==0) return 1;
    int half = Pow(x,y/2);
    if(y&1) return half * half % mod * ttt % mod;
    return half * half % mod;
}
#include <stdio.h>
#include <windows.h>

int main()
{
   string s;
   if (getline(cin,s))
   {
       cout<<s;
   }
   
    
}
