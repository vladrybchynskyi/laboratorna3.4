
# include <iostream>
# include <cmath>
using namespace std;
int main() {
    double x;
    double y;
    double R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> R;
    if ((y <= -sqrt(-x * x + 2 * x * R) + R && y >= 0 && x <= 0) ||
        (y >= sqrt(-x * x + 2 * x * R) + R && y <= 0 && x >= 0))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    cin.get();
    return 0;
}