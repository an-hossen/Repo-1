// Online C compiler to run C program online
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>

struct stdt {
    
    char name[100];
    
    int roll;
};

struct tchr {
    
    char nam[100];
    char dpt[100];
};

struct stf {
    
    char nm[100],phn[100];
};
int main() {
    int n,i,m,o,c;
    
    struct stdt s[100];
    
    struct tchr t[100];
    
    struct stf f[100];
    
    
        printf("Enter no. of students : ");
    
        scanf("%d",&n);
    
        printf("Enter students roll and name : \n");
    
        for(i = 0; i<n; i++) {
        
            printf("%d.\t",i+1);
            
            scanf("%d",&s[i].roll);
        
            scanf("%[^\n]s",&s[i].name);
        
        }
    
        printf("Enter no. of teachers : ");
    
        scanf("%d",&m);
    
        printf("Enter teachers name and department : \n");
    
        for(i = 0; i<m; i++) {
        
            printf("%d.\t",i+1);
        
            scanf("%[^\n]s",&t[i].nam);
        
            scanf("%s",&t[i].dpt);
        
        }
    
        printf("Enter no. of staffs : ");
    
        scanf("%d",&o);
    
        printf("Enter staffs phn no and name : \n");
    
        for(i = 0; i<o; i++) {
        
            printf("%d.\t",i+1);
            
            scanf("%[^\n]s",&f[i].phn);
        
            scanf("%[^\n]s",&f[i].nm);
        
        }
    
        printf("\tRoll.\tName\n");
    
        for(i=0;i<n;i++) {
        
            printf("\t%d.\t%s\n",s[i].roll,s[i].name);
        }
    
        printf("\tName\tDepartment\n");
    
        for(i=0;i<m;i++) {
        
            printf("\t%s.\t%s\n",t[i].nam,t[i].dpt);
        }
    
        printf("\tName\tPhone Number\n");
    
        for(i=0;i<o;i++) {
        
            printf("\t%s.\t%s\n",f[i].nm,f[i].phn);
        }
    
    

    return 0;
}