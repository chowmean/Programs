#include <stdio.h>

static char input[] = "aaabbbccc";
static char output[sizeof input];

/* i is the current index in the input string
 * j is the current index in the output string
 */
static void printsubs(int i, int j) {
    /* print the current output string */
    output[j] = '\0';
    printf("%s\n", output);
    /* extend the output by each character from each remaining group and call ourselves recursively */
    while(input[i] != '\0') {
        output[j] = input[i];
        printsubs(i + 1, j + 1);
        /* find the next group of characters */
        do ++i;
        while(input[i] == input[i - 1]);
    }
}

int main(void) {
    printsubs(0, 0);
    return 0;
}
