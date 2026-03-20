#include <iostream>
using namespace std;

void ris(int size) {
    for (int x = 0; x < size; ++x) {
        for (int y = 0; y < size; ++y) {
            if (y == 0 || x == 0 || x == size - 1 || y == size - 1 || x == size / 2) cout << "#";
            else cout << ".";
        }
        cout << endl;
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    // Проверяем, удовлетворяет ли диапазон условиям
    if (a <= b && a > 3) {
        if (a % 2 == 0) ++a; // Приводим a к нечётному
        if (a > b) { // Если после увеличения a выходит за пределы b
            cout << "Not OK" << endl;
            return 0;
        }
        for (int i = a; i <= b; i += 2) {
            ris(i);
        }
    }
    else {
        cout << "Not OK" << endl;
    }

    return 0;
}
