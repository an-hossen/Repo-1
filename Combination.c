#include<stdio.h>
#define mod 1000003
int main() {
    int t,n,k,j;
    long long p_1=1,p_2=1,p_3=1,inverse = 1,result;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%d%d",&n,&k);
        if(k>n) {
            result=0;
        }
        if(k==0 || k==n) {
            result = 1;
        }
        for(j=0;(n-j)>1;j++) {
            p_1=(p_1*(n-j))%mod;
        }
        for(j=0;(k-j)>1;j++) {
            p_2=(p_2*(k-j))%mod;
        }
        for(j=0;((n-k)-j)>1;j++) {
            p_3=(p_3*((n-k)-j))%mod;
        }
        for(j=0;j<mod-2;j++) {
            inverse*=(p_2*p_3)%mod;
        }
        result=(p_1*inverse)%mod;
        printf("Case %d: %lld\n",i+1,result);
    }
    return 0;
}