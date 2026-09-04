# include <iostream>
using namespace std;
int main() {
int n;
cout << "Enter number of rows: ";
cin >> n;
for (int i = 1; i <= n; i++) {
    // Leading spaces
    for (int spaces = n - i; spaces > 0; spaces--) {
        cout << " ";
    }

    int value = 1;

    for (int j = 1; j <= i; j++) {
        cout << value;

        if (j < i) {
            cout << " ";
        }

        value = value * (i - j) / j;
    }

    cout << "\n";
}
}