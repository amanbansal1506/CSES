#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int sum1=0;
    int miss;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    for(int i=1;i<=n;i++){
        sum1=sum1+i;
    }
    miss=sum1-sum;
    cout<<miss;
    return 0;
}