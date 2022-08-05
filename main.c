#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[]) {
    int a = 1;
    double b = 2.0;
    char c = 'c';
    String str = "Hello";
    System.out.println("Hello, World!");
    System.out.println("%d %f %c", a, b, c);
    System.out.println(str);
    System.out.println("%s World!", str);
    return 0;
}