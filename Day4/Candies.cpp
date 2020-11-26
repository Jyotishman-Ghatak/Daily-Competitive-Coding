#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
long candies(int n, vector<int> arr) {
    vector<long> v(n+1,1);
    long prevc,sum=0,currc;
    for(int i=1;i<n;i++){
        currc=v[i];
        prevc=v[i-1];
        if(arr[i]>arr[i-1] && currc<=prevc){
            v[i]=prevc+1;
        }
    }
    for(int i=n-1;i>0;i--){
        currc=v[i-1];
        prevc=v[i];
        if(arr[i-1]>arr[i] && currc<=prevc){
            v[i-1]=prevc+1;
        }
    }
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

