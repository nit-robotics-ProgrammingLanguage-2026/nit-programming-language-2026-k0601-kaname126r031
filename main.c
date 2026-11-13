#include <stdio.h>

int main(void)
{
    int n;
    long long sum = 0;
    scanf("%d" , &n);
    if(n < 0)
     {
        printf("NG\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum += i;
        }

    printf("%lld\n", sum);
     }
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
    return 0;
}
