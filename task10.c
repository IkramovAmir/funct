#include <stdio.h>

void func(int n, int m, int j)
{
    if (m == 1)
    {
        printf("%d", j * n);
        return;
    }
    else
    {
        func(n, m - 1, j * n);
    }
}

int main()
{
    func(5, 3, 1);

    return 0;
}