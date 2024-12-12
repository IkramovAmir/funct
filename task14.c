#include <stdio.h>

void func(int n, int n2)
{
    if (n2 < 10)
    {
        int j = n * n2; 
        printf("%d x %d = %d\n", n, n2, j); 
        func(n, n2 + 1);
    }
}

int main()
{
    func(9, 1);
    return 0;
}