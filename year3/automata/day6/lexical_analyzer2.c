
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a token is a keyword
int isKeyword(char *token) {
    char *keywords[] = {"if", "else", "while", "int", "float", "printf", "return"};
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);
    int i;

    for ( i = 0; i < numKeywords; i++) {
        if (strcmp(token, keywords[i]) == 0) {
            return 1; // It's a keyword
        }
    }

    return 0; // It's not a keyword
}

//Function to check if the character is header or not
int isHeader(char c) {
    char headers[] = "stdio.h";
    int numHeaders = strlen(headers);
    int i;
    for ( i = 0; i < numHeaders; i++) {
        if (c == headers[i]) {
            return 1; // It's an header
        }
    }

    return 0; // It's not an header
}
// Function to check if a character is an operator
int isOperator(char c) {
    char operators[] = "+-*/=<>";
    int numOperators = strlen(operators);
    int i;
    for ( i = 0; i < numOperators; i++) {
        if (c == operators[i]) {
            return 1; // It's an operator
        }
    }

    return 0; // It's not an operator
}
int isParenthesis(char c){
    char parenthesis[]= "()[]{}";
    int numparen = strlen(parenthesis);
    int i;
    for ( i=0; i<numparen; i++){
        if(c==parenthesis[i]){
          return 1;
        }
    }
    return 0;
}

int main() {
    char code[1000];
  int n=0;
    printf("Enter code (end with a period '?'): \n");
    scanf("%[^?]", code);

    char *token = strtok(code, " \t\n"); // Tokenize the input code

    while (token != NULL) {
        if (isKeyword(token)) {
            printf("Keyword: %s\n", token);
            n++;
        }
        else if(token[0]=='i'){
            printf("Identifier: %s\n", token);
            n++;
        }
        else if (isHeader(token[0])){
            printf("Header: %s\n", token);
          n++;
        }
        else if (isOperator(token[0])) {
            printf("Operator: %s\n", token);
            n++;
        } else if (isdigit(token[0])) {
            printf("Constant: %s\n", token);
            n++;
        } else if (isParenthesis(token[0])){
            printf("Parenthesis: %s\n", token);
            n++;
        }  

          else if(token[0]==',' || token[0]=='"'){
            printf("Punctuation: %s\n", token);
            n++;
          }
        else {
            printf("Special Character: %s\n", token);
            n++;
        }

        token = strtok(NULL, " \t\n");
    }
  printf("Total number of tokens are: %d", n);
    return 0;
}
