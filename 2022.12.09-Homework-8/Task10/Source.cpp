#include <iostream>

void get(int(*mas)[2], int n, int i);
int search(int(*mas)[2], int n, int k, int i, bool is_first);


int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    int mas[1000][2]{ 0 };

    std::cin >> n;
    get(mas, n, 0);
    std::cin >> k;

    std::cout << search(mas, n, k, 0, 1);

    return 0;
}


void get(int(*mas)[2], int n, int i)
{
    if (i == n)
    {
        return;
    }

    std::cin >> mas[i][1] >> mas[i][0];

    get(mas, n, i + 1);
}

int search(int(*mas)[2], int n, int k, int i, bool is_first)
{
    if (i == n)
    {
        return 0;
    }

    if (is_first)
    {
        if (mas[i][1] == k)
        {
            return 1 + search(mas, n, k, 0, 0);
        }
        else
        {
            return search(mas, n, k, i + 1, 1);
        }
    }
    else
    {
        if (mas[i][0] == k)
        {
            return 1 + search(mas, n, mas[i][1], 0, 0);
        }
        else
        {
            return search(mas, n, k, i + 1, 0);
        }
    }
}