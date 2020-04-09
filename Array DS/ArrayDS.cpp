#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    int N;
    std::cin>>N;
    int arr[N];
    for(int i=0;i<N;++i){
        std::cin>>arr[i];
    }
    for(int j=N-1;j>=0;--j){
        std::cout<<arr[j]<<" ";
    }
}
