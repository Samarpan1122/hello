/**
 * Author: Samarpan Mohanty
 *         smohanty13@unl.edu
 * Date: 2024/08/13
 *
 * A simple hello world program in C
 *
 */
#include <stdlib.h>
#include <stdio.h> // Fixed: Added missing closing angle bracket

void print_hello(const char *name, const char *major) {
    // Function to print hello message and major
    printf("Hello World, I'm %s!\n", name);
    printf("My major is %s!\n", major);
}

int main(int argc, char **argv) { // Fixed: Added missing curly braces

    // Using a function to improve maintainability and readability
    print_hello("Samarpan Mohanty", "Computer Engineering");
    print_hello("Alex Ventura (LA)", "Computer Engineering");

    return 0; // Fixed: Added missing semicolon
}