#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &v, int i, int j){
    int t = v[i];  v[i] = v[j]; v[j] = t;
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    swap(v, 0, 2);
    printf("%d %d\n", v[0], v[2]);
}