#include <stdio.h>

void func(int n, int m, int num)
{
    if (num % n == 0 && num % m == 0)
    {
        printf("%d ", num);
        return;
    }

    func(n, m, num + 2);
}

int main()
{
    func(6, 8, 8);

    return 0;
}