#include<bits/stdc++.h>

using namespace std;

bool tripletSum(vector<int>& arr){
    int n=arr.size();
    
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(arr[i]+arr[j]+arr[k]==0){
                    
    //                 return true;
    //                 break;

    //             }
    //         }
    //     }
    // }
    // return false;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        
            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = arr[i] + arr[left] + arr[right];
                if (sum == 0) {
                    return true; 
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            
        }
    }
    return false; 
}

int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    cin>>n;


int a;

vector<int>arr;

for(int i=0;i<n;i++){
    cin>>a;
    arr.push_back(a);
}
int result=tripletSum(arr);
if(result){
    cout<<1<<endl;
}else{
    cout<<0<<endl;
}

    return 0;
}
