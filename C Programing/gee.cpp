#include<iostream>

using namespace std;
int main(){
    int arr[] = {3, 0, 2, 0, 4};
    int ans = 0;
    for(int i=1; i<4; i++){
        if(arr[i] < arr[i-1] and arr[i] < arr[i+1])
        {
            int mini = min(arr[i-1], arr[i+1]);
            ans = ans + (mini - arr[i]);
        }
    }
    cout << ans << endl;
}
