#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> elements) {
        this->elements = elements;
    }

    int computeDifference() {
        int temp = 0;
        int max = 0;
        for (int i=0; i<(elements.size()-1); i++) {
            for (int j=i; j<elements.size(); j++) {
                temp = abs(elements[i] - elements[j]);
                if (temp > max) {
                    max = temp;
                }
            }
        }
        maximumDifference = max;
        return maximumDifference;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}