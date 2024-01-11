#include <iostream>
#include <vector>
#include <limits.h>
#include <string>
#include <algorithm>  // Add this line for transform
using namespace std;

int main() {
    string s = "c1 O$d@eeD o1c";
    int start = 0;
    int end = s.length() - 1;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    while (start <= end) {
        if (s[start] != s[end]) {
            cout << "False";
            break;
        } else {
            start++;
            end--;
        }
    }

    cout << "True";

    return 0;
}
