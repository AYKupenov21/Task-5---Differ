#include <iostream>
using namespace std;
class Differ {
private:
    int* sequence;
    int size;
public:
    Differ(int* seq, int sz) {
        sequence = seq;
        size = sz;
        bool check = true;
        for (int i = 0; i < size; ++i) 
        {
            for (int j = i + 1; j < size; ++j) 
            {
                if (*(sequence + i) == *(sequence + j)) 
                {
                    check = false;
                }
            }
        }
        if (check == true)
        {
            cout << "There aren't repeated elements in the sequence.";
        }
        else
        {
            cout << "There are repeated elements in the sequence.";
        }
    }
};

int main() {
    int numbers[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    int size = sizeof(numbers) / sizeof(*numbers);
    Differ differ(numbers, size);
}
