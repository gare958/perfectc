#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
    int n; cin >> n;
    map<string, int> D;
    for (int i = 0; i < n; i++){
        string str; cin >> str;
        if(D.find(str) == D.end())
            D[str] = 1;
        else   
            D[str] += 1;
    }
    for(auto item: D)
        cout << item.first << "," << item.second << endl;
} // 가장 많이 나온 단어 출력하기