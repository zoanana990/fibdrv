
#include "fibstr.h"

ssize_t fib_strlen(const char *c)
{
    unsigned int n = 0;
    for (; *c; c++)
        n++;
    return n;
}

void fib_strncpy(char *dst, char *src, ssize_t n)
{
    // copy the string
    for (int i = 0; i < n; i++)
        *(dst + i) = *(src + i);

    *(dst + n) = '\0';
}

void fib_stradd(char *num1, char *num2, char *res)
{
    unsigned int l1 = fib_strlen(num1), l2 = fib_strlen(num2);
    if (fib_strlen(num1) < fib_strlen(num2)) {
        fib_stradd(num2, num1, res);
        return;
    }

    int carry = 0;

    int i = l1 - 1;
    for (int j = l2 - 1; i >= 0 && j >= 0; i--, j--) {
        int sum = num1[i] - '0' + num2[j] - '0' + carry;
        res[i] = sum % 10 + '0';
        carry = sum / 10;
    }

    for (; i >= 0; i--) {
        int sum = num1[i] - '0' + carry;
        res[i] = sum % 10 + '0';
        carry = sum / 10;
    }

    if (carry) {
        int k = fib_strlen(res) + 1;
        res[k] = '\0';
        for (; k > 1; k--)
            res[k - 1] = res[k - 2];
        res[0] = '1';
    } else
        res[l1] = '\0';
}