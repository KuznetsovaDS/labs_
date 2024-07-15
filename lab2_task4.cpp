
#include <iostream>
using namespace std;
void shootLevel(int points) {
    if (points >= 50) {
        cout << "уровень: Снайпер" << endl;
    }
    else if (points >= 30) {
        cout << "уровень: Опытный стрелок" << endl;
    }
    else if (points >= 10) {
        cout << "уровень: Новичок" << endl;
    }
    else {
        cout << "уровень: Начинающий" << endl;
    }
    }
int main()
{
    system("chcp 1251");
    const int score = 50;
    int totalPoints = 0;
    int shots = 0;
    while (totalPoints < score) {
        int x, y;
        cout << "Введите координаты x y ";
        cin >> x >> y;
        double dist = sqrt(x * x + y * y);
        if (dist <= 1) {
            totalPoints += 10;
        }
        else if (dist <= 2) {
            totalPoints += 5;
        }
        shots++;
    }
    
    cout << "Набрано " << totalPoints << " очков за " << shots << " выстрелов" <<endl;
    shootLevel(totalPoints);
}

