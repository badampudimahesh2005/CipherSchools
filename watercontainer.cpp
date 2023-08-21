#include<bits/stdc++.h>

using namespace std;

int maxcontainer(vector<int>& heights){
    int maxcontainer=0;
    int left=0;
    int right=heights.size()-1;

    while(left<right){

        int minheight=min(heights[left],heights[right]);
        int width=right-left;

        int watercontainer=minheight*width;

        maxcontainer=max(maxcontainer,watercontainer);

        if(heights[left]<heights[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxcontainer;
}

int main(){
    int n;
    cout << "Enter the number of heights: ";
    cin >> n;
    int a;

    vector<int> heights;
    cout << "Enter the heights: ";
    for (int i = 0; i < n; i++) {
        cin>>a;
        heights.push_back(a);
    }

cout<<maxcontainer(heights);

  }
