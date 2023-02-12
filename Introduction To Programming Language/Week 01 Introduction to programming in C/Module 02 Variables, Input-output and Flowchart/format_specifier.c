//Problem number : 05
//Author : Md. Rahul Hasan Ridoy
//Date : 10/02/2023
//Description : This program will show the use of format specifier in C.
//This code written only for learning purpose.

#include<stdio.h>
int main()
{
    //%c using process in c
    char c = 'A';
    scanf("%c", &c);
    printf("%c", c);

    //%s using process in c
    char s[100];
    scanf("%s", s);
    printf("%s", s);

    // %hi using process in c
    short int si = 10;
    scanf("%hi", &si);
    printf("%hi", si);

    //%hu using process in c
    unsigned short int usi = 10;
    scanf("%hu", &usi);
    printf("%hu", usi);

    //%I or %ld or %li using process in c
    long int li = 10;
    scanf("%ld", &li);
    printf("%ld", li);

    //%lf using process in c
    double d = 10.5;
    scanf("%lf", &d);
    printf("%lf", d);

    //%LF using process in c
    long double ld = 10.5;
    scanf("%LF", &ld);
    printf("%LF", ld);

    //%lu using process in c
    unsigned long int uli = 10;
    scanf("%lu", &uli);
    printf("%lu", uli);

    //%lli or %lld using process in c
    long long int lli = 10;
    scanf("%lli", &lli);
    printf("%lli", lli);

    //%llu using process in c
    unsigned long long int ulli = 10;
    scanf("%llu", &ulli);
    printf("%llu", ulli);

    //%n using process in c
    int n = 10;
    scanf("%n", &n);
    printf("%n", n);

    //%d using process in c
    int k = 10;
    scanf("%d", &k);
    printf("%d", k);

    //%o using process in c
    int o = 10;
    scanf("%o", &o);
    printf("%o", o);

    //%x using process in c
    int x = 10;
    scanf("%x", &x);
    printf("%x", x);

    //%p using process in c
    int p = 10;
    scanf("%p", &p);
    printf("%p", p);

    //%f using process in c
    float f = 10.5;
    scanf("%f", &f);
    printf("%f", f);

    //%u using process in c
    unsigned int ui = 10;
    scanf("%u", &ui);
    printf("%u", ui);

    //%e or %E using process in c
    float e = 10.5;
    scanf("%e", &e);
    printf("%e", e);

    //%% using process in c
    int percent = 10;
    scanf("%%", &percent);
    printf("%%", percent);

    return 0;
}