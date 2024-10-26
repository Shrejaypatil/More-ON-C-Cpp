#include <iostream>

using namespace std;

void print_reverse(char *s)
{
    if (*s != '\0')
    {
        print_reverse(s + 1);
        cout << s;
    }
}

int main()
{

    char s[] = "Hi my ";

    print_reverse(s);
    return 0;
}
