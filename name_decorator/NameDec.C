#include <stdio.h>

int main() {
    char name[100];
    printf("What is your name?:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    char decoratedname1[200], decoratedname2[200], decoratedname3[200], decoratedname4[200];
    char decoratedname5[200], decoratedname6[200], decoratedname7[200];
    char alldecoratednames[1400];

    snprintf(decoratedname1, sizeof(decoratedname1), "<<%s>>", name);
    snprintf(decoratedname2, sizeof(decoratedname2), "##%s##", name);
    snprintf(decoratedname3, sizeof(decoratedname3), "\\%s//", name);
    snprintf(decoratedname4, sizeof(decoratedname4), "$$ %s $$", name);
    snprintf(decoratedname5, sizeof(decoratedname5), "%%s%%", name);
    snprintf(decoratedname6, sizeof(decoratedname6), "@@%s@@", name);
    snprintf(decoratedname7, sizeof(decoratedname7), "^^%s^^", name);
    snprintf(alldecoratednames, sizeof(alldecoratednames), "%s %s %s %s %s %s %s",
             decoratedname1, decoratedname2, decoratedname3, decoratedname4, decoratedname5, decoratedname6, decoratedname7);
    printf("%s\n", alldecoratednames);
    printf("Thanks for using this program to make your name a little bit silly by decorating it, I hope you had fun!!!\n");

    return 0;
}
