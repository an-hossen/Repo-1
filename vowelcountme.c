#include<stdio.h>
#include<string.h>

int vowelcount(char string[]);

int main() {

    int i;

    char ch, string[1000];
    
    char vowel[10] = "aeiou";

    printf("Enter Your String : ");

    fgets(string,1000,stdin);

    printf("\nTotal Vowels = %d",vowelcount(string));

    return 0;
}

int vowelcount(char string[]) {

    int i,j,count = 0;

    char vowel[10] = "AEIOUaeiou";

    printf("This Vowels was in your Strings : ");

    for(i = 0; string[i]!='\0'; i++) {

        for(j = 0; vowel[j] !='\0'; j++) {

            if(string[i] == vowel[j]){

                count++;

                printf("%c\t",string[i]);

            }
        }
    
    }
    return count;
}
    
   