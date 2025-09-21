#include<stdio.h>
int main(){

    char word[100];
    int i,length,lowercase_vowel_counter=0,uppercase_vowel_counter=0;

    printf("Enter a word\t:\t");
    gets(word);

    length=strlen(word);

    for(i=0;i<length;i++){
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
            lowercase_vowel_counter++;
        }
    }
    for(i=0;i<length;i++){
        if(word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U'){
            uppercase_vowel_counter++;
        }
    }

    printf("%d number of lower case vowels are there\n",lowercase_vowel_counter);
    printf("%d number of upper case vowels are there",uppercase_vowel_counter);

return 0;
}
