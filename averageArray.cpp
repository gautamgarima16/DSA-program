#include<iostream>
using namespace std;
int main(){
    int arr[]= {10,20,34,6,7};
    int sum =0;
    for( int i=0; i<5 ;i++){
        sum += arr[i];
    }
    cout << "Average =" << sum /5.0;
    return 0;
}