//习题1-5：打折
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n;
    float w=0;
    cin>>n;
    w=95*n;
    if(w>=300)w*=0.85;
    printf("%.2f\n",w);
    return 0;
}
