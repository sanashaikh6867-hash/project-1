#include <stdio.h>
#define MAX 50

char s[MAX];
int top = -1;

int main() {
    char exp[50], ch;
    int i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for (i = 0; exp[i] != '\0'; i++) {
        ch = exp[i];

        if (ch == '(' || ch == '{' || ch == '[')
            s[++top] = ch;

        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) {
                printf("Not Balanced");
                return 0;
            }
            top--;
        }
    }

    if (top == -1)
        printf("Balanced Parentheses");
    else
        printf("Not Balanced");

    return 0;
}