#include <unistd.h>
#include <stdio.h>

int main() {
    void *initial_brk, *new_brk;

    // Get current program break
    initial_brk = sbrk(0);
    printf("Initial program break: %p\n", initial_brk);

    // Move the program break by 4096 bytes (1 page)
    if (brk(initial_brk + 4096) == 0) {
        new_brk = sbrk(0);
        printf("Program break after brk(): %p\n", new_brk);
    } else {
        perror("brk failed");
    }

    // Optionally, reset to original break
    if (brk(initial_brk) == 0) {
        printf("Program break reset to: %p\n", sbrk(0));
    }

    return 0;
}
