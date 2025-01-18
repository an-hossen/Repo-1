#include<stdio.h>
long long sod(long long n) {
    int i;
    long long Sod=0;
    for(i=2;i<n;i++) {
        if(n%i==0) {
            Sod+=i;
        }
    }
    return Sod;
}
long long csod(long long n) {
    int i;
    long long Csod=0;
    for(i=1;i<=n;i++) {
        Csod+=sod(i);
    }
    return Csod;
}
int main() {
    int t;
    long long n;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%lld",&n);
        printf("Case %d: %lld\n",i+1,csod(n));
    }
    return 0;
}