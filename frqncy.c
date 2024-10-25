#include<stdio.h>

int main() {

    char str[1000],c;

    int i,j,k = 0,n = 0,index[1000], cnt, mx[1000], max = 1;

    printf("Enter Your String : ");

    scanf("%[^\n]s",&str);  //Input a string from user.

    for(i = 0; str[i] != '\0'; i++) {  

        cnt = 1;

        for(j=i+1;str[j]!='\0';j++) {  //Every character checking.

            if(str[i] == str[j]) {

                cnt ++;  //How many times a character present.

                n++;   //The times of all true conditions.

                index[k] = j;  //Store every location of true conditions.

                k++; 
            }
        }
        
        mx[i] = cnt; // Store the frequences.
        
        if(str[i]!=' '){  //Space will not count for frequency.
            
            printf(" %c is %d times.\n",str[i],cnt);
        }

        for(int x = 0; x<n; x++){

            if(i+1 == index[x]){  //Avoiding those location where it's same character verifyed.

                i+=1;

                break;
            }
        }

    }
    
    for(i=0;str[i]!='\0';i++){  //Checking for the highest frequency character.
        
        if(mx[i]>max){
            
            max = mx[i];
            
            c = str[i];
        }
    }
    
    if(max!=1){

        printf("\nSo %c has the highest frequency.\n",c);
    }

    else{

        printf("There is no Highest frequency character.\n");
    }
    
    return 0;
}