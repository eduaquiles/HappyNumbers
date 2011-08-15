#include <iostream>
#include <set> 
using namespace std;set<int> s;int i,a;int main(){cin>>i;while(i-1){a=i;i=0;while(a){i+=(a%10)*(a%10);a/=10;}if(!s.insert(i).second&&i){cout<<"un";goto l;}}l:cout<<"happy"<<endl;}
