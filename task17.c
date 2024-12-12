#include <stdio.h>

void func(char n[], int l)
{

int left = 0, right = 0;
    for (int i = 0; i <= l; i++)
    {
        if (n[i] == '(')
        {
            left++;
        }else if (n[i] == ')')
        {
            right++;
        }
    }
    
    if (left == right)
    {
        printf("OK");
    }else printf("Not ok");

}

int main()
{

    char word[] = "(12+5) - (2*5)";
    int length = sizeof(word) / sizeof(word[0]) - 2;
    func(word, length);

    return 0;
}