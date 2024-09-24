#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    char arr[4][4];

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int hashes{};
            int dots{};

            // For each square, count the hashes and dots.
            arr[i][j] == '#' ? hashes++ : dots++;
            arr[i][j + 1] == '#' ? hashes++ : dots++;
            arr[i + 1][j] == '#' ? hashes++ : dots++;
            arr[i + 1][j + 1] == '#' ? hashes++ : dots++;

            // If there's at least 3 dots or hashes, then we can make a complete square.
            if (hashes >= 3 || dots >= 3)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
