//例题1-5：三整数排序
#include<iostream>
using namespace std;

int main(){
    int a,b,c,t;
    cin>>a>>b>>c;
    if(a>b){
        t=a;
        a=b;
        b=t;
    }
    if(a>c){
        t=a;
        a=c;
        c=t;
    }
    if(b>c){
        t=b;
        b=c;
        c=t;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
