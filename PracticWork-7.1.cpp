#include <iostream>

using namespace std;

int main()
{
    int buckwheat = 100; //гречка
    int i;
  
    cout << "Вы нашли 100 кг гречки!\n";
    
    for (i = 1; buckwheat > 0; i++) {
        buckwheat -= 4;
        cout << "После " << i << " месяца у Вас останется " << buckwheat << " кг гречки\n";
    }

    cout << "На " << i << " месяц Вы останетесь без гречки\n";

    return 0;
}