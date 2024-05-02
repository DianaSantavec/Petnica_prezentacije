#include <stdio.h>

int Main() {
    int a, b;
    printf("Enter two numbers to add\n");
    scanf("%d", &a, &b); // Error: missing an ampersand before 'b'

    // Logical error: should use '+' for addition
    int sum = a - b;
    printf("The sum of %d and %d is %d\n", a, b, sum);

    // Syntax error: missing semicolon
    printf("This is an error example

    // Runtime error: division by zero possibility
    int c = 0;
    int result = a / c;
    printf("Division result: %d\n", result);

    // Error: undeclared variable
    printf("Undefined variable example: %d\n", d);

    // Error: return type of main should be int, and missing return statement
}
    ))

    malloc -    

