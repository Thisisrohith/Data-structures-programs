#include<stdio.h>
int main()
{
static void fibo(int n, int a, int b)
{
    if (n > 0) {
 
        fibo(n - 1, b, a + b);
 
     
}

        Console.Write(a + " ");
    }
}
 
public static void Main()
{
    int N = 10;
    fibo(N, 0, 1);
    return 0;
}
 
