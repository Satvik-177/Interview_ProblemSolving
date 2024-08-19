#include<bits/stdc++.h>
using namespace std;

void reverse(int* arr, int n){

    int s = 0;
    int e = n-1;

    while(s<=e){

        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}