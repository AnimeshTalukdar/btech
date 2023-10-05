#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int f;
int isKeyword(char buffer[]) {
    char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                             "do", "double", "else", "enum", "extern", "float", "for", "goto",
                             "if", "int", "long", "register", "return", "short", "signed",
                             "sizeof", "static", "struct", "switch", "typedef", "union",
                             "unsigned", "void", "volatile", "while"};
    int i, flag = 0;

    for (i = 0; i < 32; ++i) {
        if (strcmp(keywords[i], buffer) == 0) {
            flag = 1;
            break;
        }
    }

    return flag;
}

int main() {
    char ch, buffer[15], b[30], logical_op[] = "><", math_op[] = "+-*/=", numer[] = ".0123456789", other[] = ",;\(){}[]'':";
    FILE *fin = fopen("file.c", "r");
    int mark[1000] = {0};
    int i, j = 0, kc = 0, ic = 0, lc = 0, mc = 0, nc = 0, oc = 0, aaa = 0;
    char k[100][15];
    char id[1000];
    char lo[1000];
    char ma[1000];
    char nu[100][30];
    char ot[1000];

    if (!fin) {
        printf("error while opening the file\n");
        exit(0);
    }

    while ((ch = fgetc(fin)) != EOF) {
        for (i = 0; i < 12; ++i) {
            if (ch == other[i]) {
                int aa = ch;
                if (mark[aa] != 1) {
                    ot[oc++] = ch;
                    mark[aa] = 1;
                }
            }
        }

        for (i = 0; i < 5; ++i) {
            if (ch == math_op[i]) {
                int aa = ch;
                if (mark[aa] != 1) {
                    ma[mc++] = ch;
                    mark[aa] = 1;
                }
            }
        }

        for (i = 0; i < 2; ++i) {
            if (ch == logical_op[i]) {
                int aa = ch;
                if (mark[aa] != 1) {
                    lo[lc++] = ch;
                    mark[aa] = 1;
                }
            }
        }

        if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' ||
            ch == '8' || ch == '9' || ch == '.' || ch == ' ' || ch == '\n' || ch == ';') {
            if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' ||
                ch == '8' || ch == '9' || ch == '.') {
                b[aaa++] = ch;
            }
            if ((ch == ' ' || ch == '\n' || ch == ';') && (aaa != 0)) {
                b[aaa] = '\0';
                aaa = 0;
                char arr[30];
                strcpy(arr, b);
                strcpy(nu[nc++], arr);
            }
        }

        if (isalnum(ch)) {
            buffer[j++] = ch;
        } else if ((ch == ' ' || ch == '\n') && (j != 0)) {
            buffer[j] = '\0';
            j = 0;
            if (isKeyword(buffer) == 1) {
                strcpy(k[kc++], buffer);
            } else {
                if (buffer[0] >= 97 && buffer[0] <= 122) {
                    if (mark[buffer[0] - 'a'] != 1) {
                        id[ic++] = buffer[0];
                        mark[buffer[0] - 'a'] = 1;
                    }
                }
            }
        }
    }

    fclose(fin);

    printf("Keywords: ");
    for (f = 0; f < kc; ++f) {
        if (f == kc - 1) {
            printf("%s\n", k[f]);
        } else {
            printf("%s, ", k[f]);
        }
    }

    printf("Identifiers: ");
    for (f = 0; f < ic; ++f) {
        if (f == ic - 1) {
            printf("%c\n", id[f]);
        } else {
            printf("%c, ", id[f]);
        }
    }

    printf("Math Operators: ");
    for (f = 0; f < mc; ++f) {
        if (f == mc - 1) {
            printf("%c\n", ma[f]);
        } else {
            printf("%c, ", ma[f]);
        }
    }

    printf("Logical Operators: ");
    for (f = 0; f < lc; ++f) {
        if (f == lc - 1) {
            printf("%c\n", lo[f]);
        } else {
            printf("%c, ", lo[f]);
        }
    }

    printf("Numerical Values: ");
    for (f = 0; f < nc; ++f) {
        if (f == nc - 1) {
            printf("%s\n", nu[f]);
        } else {
            printf("%s, ", nu[f]);
        }
    }

    printf("Others: ");
    for (f = 0; f < oc; ++f) {
        if (f == oc - 1) {
            printf("%c\n", ot[f]);
        } else {
            printf("%c ", ot[f]);
        }
    }

    return 0;
}

