#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/uaccess.h>

#define SIZE 512
#define TARGET 500

ssize_t fib_strlen(const char *);
void fib_strncpy(char *, char *, ssize_t);
void fib_stradd(char *, char *, char *);
// void fib(unsigned int);
