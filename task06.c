#include <stdio.h>

void func(int n, int m, int num)
{
    if (n % num == 0 && m % num == 0)
    {
        printf("%d ", num);
        if (num == n || num == m)
        {
            return;
        }
    }
    
    func(n, m, num + 1);      

}

int main()
{
    func(6, 8, 2);

    return 0;
}