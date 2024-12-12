#include <stdio.h>

void func(int n)
{
    if (n == 0)
    {
        return;
    }else printf("Hellow world");
    printf("\n");

    func(n - 1);
}

int main()
{
    func(4);

    return 0;
}