#include<stdio.h>
#include<string.h>

int main() {

    char str[1000],vlS[] = "aeiou",vlC[] = "AEIOU";

    int i,j,k;

    printf("Enter Your String : ");

    fgets(str,1000,stdin);

    printf("The Vowels in this String : ");

    for(i=0; str[i]!='\0'; i++) {

        for(j=0,k=0; vlS[j]!='\0'; j++,k++) {

            if(str[i]==vlS[j]) {

                printf("%c  ",str[i]);

                str[i] = vlC[k];

            }
        }
    }

    printf("\nHere is Converted String : ");

    puts(str);

    return 0;
}