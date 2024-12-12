#include <stdio.h>

void func(int n, int m)
{
    int count = 1;

    for (int i = m; 0 < i; i--)
    {
        count *= n ;
    }
    
    printf("%d", count);
}

int main()
{
    func(2,3);

    return 0;
}