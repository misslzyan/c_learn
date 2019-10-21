#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
bool isMatch(char *s, char *p) {
    int adv = 1;
    if(*p == 0) return *s==0;
    if(*p && *(p+1) && *(p+1)=='*') {
        if (isMatch(s, p+2))
        {
            /* code */
            return 1;
        }
        adv = 0;
    }
    if((*s && *p=='.' )|| *s==*p) {
        return isMatch(s+1, p+adv);
    }
    return 0;
}


int main() {
    char *s = "ab";
    char *p = ".*";
    printf("%s\n", isMatch(s, p) == 0 ? "FALSE" : "TRUE");
}