#include<iostream>
#include<stdlib.h>
#include<cstdio>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long n,i;
cin>>n;
long long a[n],b[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
for(i=0;i<n;i++){
    b[a[i]-1]=i+1;
}
for(i=0;i<n;i++){
    cout<<b[i]<<" ";
}
return 0;
}






