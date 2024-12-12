#include <stdio.h>

void func(char n[], int l)
{

    // for (int i = l; l >= 0; l--)
    // {
    //     printf("%c", n[l]);
    // }

    printf("%c", n[l]);
    if (n[l] >= 0)
    {
        func(n, l - 1);
    }
    
}

int main()
{

    char word[] = "Salom";
    int length = sizeof(word) / sizeof(word[0]) - 2;
    func(word, length);

    return 0;
}