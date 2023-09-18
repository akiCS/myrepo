#include<iostream>
#include<climits>
using namespace std;
int main(){


    int n;
    cout<<"enter the size of an array : ";
    cin>>n;

    int arr[n];

    cout<<"enter the elements of an array : ";

    for( int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for( int i=0; i<n; i++) {
        if(arr[i]> max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2) {
            max3 = max2;
            max2 = arr[i];
        }
        else if(arr[i] > max3) {
            max3 = arr[i];
        }
    }

    cout<< "the first largest element in array is : " << max1 << endl;
    cout<< "the second largest element in array is : " << max2 << endl;
    cout<< "the third largest element in array is : " << max3 << endl;

}