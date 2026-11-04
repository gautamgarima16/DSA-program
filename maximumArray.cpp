#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,56,37,822,8999};
    int maxi =arr[0];
    for(int i =0; i<5;i++){
        if(arr[i]> maxi){
            maxi = arr[i];
        }
    }
    cout << maxi ;
    return 0;
}
