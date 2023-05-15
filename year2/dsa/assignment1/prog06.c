#include <stdio.h>
#include <stdlib.h>

typedef struct term {
int c,e;
}term;

typedef struct poly {
term t[40];
int n;
}poly;
void plarge(poly a) {
int i;
for (i = 0; i < a.n; i++) 
printf ("%d", a.t[i].c);
}
void rlarge (poly *a) {
int i;
printf ("Enter no. of digits: ");
scanf("%d", &a->n);
printf ("Enter the digits of the number (space-separated): ");
for (i = 0; i < a->n;i++) {
scanf ("%d", &a->t[i].c);
if (a->t[i].c < 0 || a->t[i].c > 9) {
printf ("Invalid digit. Try again.");
continue;
}
a->t[i].e = a->n - 1 - i;
}
}
poly* add (poly a, poly b) {
poly *c = (poly *) malloc(sizeof(poly));   int i, j, k;
for (i = 0, j = 0, k = 0; i < a.n && j < b.n; k++) {
if (a.t[i].e == b.t[j].e) {
c->t[k].c = a.t[i].c + b.t[j].c;
c->t[k].e = a.t[i].e;
i++; j++;
}
else if (a.t[i].e > b.t[j].e) {
c->t[k].c = a.t[i].c;
c->t[k].e = a.t[i].e;
i++;
}
else {
c->t[k].c = b.t[j].c;
c->t[k].e = b.t[j].e;
j++;
}
}
while (i < a.n) {
c->t[k].c = a.t[i].c;
c->t[k].e = a.t[i].e;
i++;  k++;
}
while (j < b.n) {
c->t[k].c = b.t[j].c;
c->t[k].e = b.t[j].e;
j++; k++;
}
c->n = k;
return c;
}

poly* addlarge (poly a, poly b) {
poly *c = add(a, b);
int car = 0, i;
for (i = c->n - 1; i >= 0; i--) {
c->t[i].c += car;
car = c->t[i].c/10;
c->t[i].c %= 10;
}
return c;
}
int main() {
poly a, b, *c;
rlarge(&a);rlarge(&b);
c = addlarge(a, b);
printf ("A = ");  plarge(a);
printf (", B = ");  plarge(b);
printf ("\nA + B = ");
plarge(*c);
printf ("\n");
return 0;
}
