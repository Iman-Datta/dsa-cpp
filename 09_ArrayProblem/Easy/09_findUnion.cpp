#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int>& vec1, vector<int>& vec2) {
    int p1 = 0, p2 = 0;
    int n = vec1.size(), m = vec2.size();
    vector<int> uni;

    while (p1 < n && p2 < m) {
        if (vec1[p1] < vec2[p2]) {
            if (uni.empty() || uni.back() != vec1[p1])
                uni.push_back(vec1[p1]);
            p1++;
        }
        else if (vec1[p1] > vec2[p2]) {
            if (uni.empty() || uni.back() != vec2[p2])
                uni.push_back(vec2[p2]);
            p2++;
        }
        else {
            if (uni.empty() || uni.back() != vec1[p1])
                uni.push_back(vec1[p1]);
            p1++;
            p2++;
        }
    }

    while (p1 < n) {
        if (uni.back() != vec1[p1])
            uni.push_back(vec1[p1]);
        p1++;
    }

    while (p2 < m) {
        if (uni.back() != vec2[p2])
            uni.push_back(vec2[p2]);
        p2++;
    }

    return uni;
}

int main() {
    int n, m;
    vector<int> vec1, vec2, vecUnion;

    cout << "Enter size of 1st vector: ";
    cin >> n;

    cout << "Enter elements (sorted): ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec1.push_back(x);
    }

    cout << "Enter size of 2nd vector: ";
    cin >> m;

    cout << "Enter elements (sorted): ";
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        vec2.push_back(x);
    }

    vecUnion = findUnion(vec1, vec2);

    cout << "Union: ";
    for (int x : vecUnion)
        cout << x << " ";

    return 0;
}