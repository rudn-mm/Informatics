#include <stdio.h>
 
struct t1
{
    char a; // 1 byte
    char b; // 1 byte
    int c;  // 4 byte
} A;
 
struct t2
{
    int x;  // 4 byte
    int y;  // 4 byte
} B;
 
struct t3
{
    char a; // 1 byte
    char b; // 1 byte
    char c; // 1 byte
    int d;  // 4 byte
} C;
 
int main(void)
{
    printf("sizeof(A) = %lu\n", sizeof(A));
    printf("sizeof(B) = %lu\n", sizeof(B));
    printf("sizeof(C) = %lu\n", sizeof(C));
}