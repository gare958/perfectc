 #include <stdio.h>

 int main()
{
    int a;
    long long A[10] = {0};
    long long B[10] = {0};
    long long C[10] = {0};
    scanf("%d", &a);
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < a; j++){
            if(i == 0)
                scanf("%lld", &A[j]);
            else
                scanf("%lld", &B[j]); 
        }
    }        
    for (int k = 0; k < a; k++)
        C[k] = A[k] + B[k];
    for (int i = 0; i < a; i++){
        printf("%lld ", C[i]);
    }
}