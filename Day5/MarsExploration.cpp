#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int n=s.length()/3;
    int count=0;
    for(int i=0;i<n;i++){
        int j=3*i;
        if(s[j]!='S'){
            ++count;
        }
        if(s[j+1]!='O'){
            ++count;
        }
        if(s[j+2]!='S'){
            ++count;
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

