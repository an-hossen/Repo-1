#include<stdio.h>

int vowelcount(char str[]);

int main() {

    int i;

    char ch, str[1000];

    printf("Enter Your String : ");

    for(i = 0; ch!='\n'; i++){

        scanf("%c",&ch);

        str[i] = ch;

    }

    str[i] = '\0';

    printf("\nTotal Vowels = %d",vowelcount(str));

    return 0;
}

int vowelcount(char str[]) {

    int i,j,count = 0;

    char vowel[] = "AEIOUaeiou";

    for(i = 0; str[i] !='\0'; i++) {

            if(str[i]=='A' || str[i]=='E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u'){

                count++;
                
                printf("%c",str[i]);
        }

    }

    return count;
}