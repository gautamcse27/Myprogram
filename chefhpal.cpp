#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string palin(int n)
{ //struct Mystring result;
    string result;
    if(n==11)return "aaababbaaba";
    else if(n==12)return "aaababbaabab";
    else if(n==13)return "aaababbaababb";
     else if(n==14)return "aaababbaababba";
      else if(n==15)return "aaababbaababbaa";
      else if(n==16)return "aaababbaababbaab";
      else {if((n-4)%6==0)return palin(n-4)+"baab";
      else if((n-4)%6==1)return palin(n-4)+"aaba";
       else if((n-4)%6==2)return palin(n-4)+"abab";
        else if((n-4)%6==3)return palin(n-4)+"babb";
         else if((n-4)%6==4)return palin(n-4)+"abba";
          else if((n-4)%6==5)return palin(n-4)+"bbaa";
//return result;
      }
}
int main()
{ios::sync_with_stdio(0);
//cin.tie(0);
    ll tm;cin>>tm;
    while(tm--)
    {
        ll n,a;cin>>n>>a;
       // string
         if(n<=a&&n<=26){cout<<"1"<<" ";
        for(ll i=0;i<n;i++)cout<<char(97+i);cout<<endl;}
        else{
        if(a==1){cout<<n<<" ";
        for(ll i=0;i<n;i++)cout<<"a";
        cout<<endl;}
        else if(a==2){
         if(n==3)cout<<"2"<<" "<<"abb"<<endl;
        else if(n==4)cout<<"2"<<" "<<"aabb"<<endl;
        else if(n==5)cout<<"3"<<" "<<"aaaba"<<endl;
        else if(n==6)cout<<"3"<<" "<<"aaabbb"<<endl;
        else if(n==7)cout<<"3"<<" "<<"aaababb"<<endl;
        else if(n==8)cout<<"3"<<" "<<"aaababbb"<<endl;
         else if(n==9)cout<<"4"<<" "<<"aaaababbb"<<endl;
          else if(n==10)cout<<"4"<<" "<<"aaaababbbb"<<endl;
          else{
           cout<<"4"<<" "<<palin(n)<<endl;
          }
        }
       else if(a>=3){cout<<"1"<<" ";
       string st,str;
       for(ll i=0;i<a;i++)st+=char(97+i);//cout<<st;
      for(ll i=0;i<n/a;i++)str+=st;//cout<<str;
      for(ll i=0;i<n%a;i++)str+=char(97+i);
       cout<<str<<endl;}
       }
    }
}
