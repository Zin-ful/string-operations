#include <stdio.h>
#include <stdlib.h>
#include "strops.h"
int main(void) {
    char inp[] = "finding positioning of inputing";

    if (find(inp, "ing")) {
        printf("True\n");
    }

    char pos[10];
    find_pos(inp, "ing", pos);
    for (int i = 0; pos[i] != '\0'; i++) {
        printf("%d\n", pos[i]);
    }
    int amt = find_all(inp, "ing");
    printf("%d\n", amt);
    char *message = pstrip(inp, "i", 2);
    printf("%s\n", message);
    free(message);
    dstrip(inp, "pos", 1);
    printf("%s\n", inp);
    char inp2[] = "splitting input";
    char str1[10];
    char str2[10];
    char str3[10];
    char str4[10];
    psplit(inp2, "n", str1, str2);
    dsplit(inp2, "tting", str3, str4);
    printf("str1: %s\nstr2: %s\n", str1, str2);
    printf("str3: %s\nstr4: %s\n", str3, str4);
    char inp3[] = "i love replace";
    replace(inp3, " re", " ");
    printf("%s\n", inp3);
    char *cache = pcopy("weenie");
    printf("%s\n", cache);
    free(cache);
    char cache2[256];
    dcopy("weenie hut jr", cache2);
    printf("%s\n", cache2);
    char cache3[] = "WEINER HAHAHAHA";
    char *isol = pisolate(cache3, "EI");
    printf("%s\n", isol);
    free(isol);
    char cache4[] = "old macdonald";
    char *cache5[256];
    disolate(cache4, cache5, "mac");
    printf("%s\n", cache5);
}

