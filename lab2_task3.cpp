#include <iostream>
using namespace std;
void minCoin(int amount) {
	int c10 = amount / 10;
	amount %= 10;
    int c5 = amount / 5;
    amount %= 5;
    int c2 = amount / 2;
    amount %= 2;
    int c1 = amount;
    cout << "10р " << c10 << " монет" << endl;
    cout << "5р " << c5 << " монет" << endl;
    cout << "2р " << c2 << " монет" << endl;
    cout << "1р " << c1 << " монет" << endl;
}
int main() {
    system("chcp 1251");
    int amount;
    cout << "Введите сумму: ";
    cin >> amount;
    minCoin(amount);
}