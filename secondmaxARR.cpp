#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]= {1,24,6,8,9};
    int n = 5;
    int largest = INT_MIN;
    int second = INT_MIN;
    for( int i=0 ; i<5 ;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];

        }
        else if( arr[i] >second && arr[i] != largest ){
            second = arr[i];
        }
    }
    cout << "second largest=" << second;
    return 0;
}