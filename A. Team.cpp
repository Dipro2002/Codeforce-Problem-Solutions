#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for(int i=0;i<n;i++){
            int P,V,T;
        cin >> P >> V >> T;
        if(P+V+T >= 2)
        {
            count++;
        }
    }
    cout << count;

}
