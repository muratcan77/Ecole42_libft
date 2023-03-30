#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(char *s) {
    int i = 0;
    int a = strlen(s);
    bool x = true;
    while (i < a) {
        if (s[i] == '(' && s[i+1] != ')')
            return false;
        if (s[i] == '{' && s[i+1] != '}')
            return false;
        if (s[i] == '[' && s[i+1] != ']')
            return false;
        i++;
    }
    return true;
}

int main() {
    char a[] = "(]";
    printf("%d", isValid(a));
    return 0;
}
