#include<stdio.h>
int main(){

    char first_alphabet_of_uppercase,last_alphabet_of_uppercase,first_alphabet_of_lowercase,last_alphabet_of_lowercase;
    int ASCII_value_of_uppercases,ASCII_value_of_lowercases;

    first_alphabet_of_uppercase='A';
    last_alphabet_of_uppercase='Z';
    first_alphabet_of_lowercase='a';
    last_alphabet_of_lowercase='z';

    for(first_alphabet_of_uppercase;first_alphabet_of_uppercase<=last_alphabet_of_uppercase;first_alphabet_of_uppercase++){

        ASCII_value_of_uppercases=first_alphabet_of_uppercase;
        printf("ASCII value of %c is\t:\t%d\n",first_alphabet_of_uppercase,ASCII_value_of_uppercases);

    }

    for(first_alphabet_of_lowercase;first_alphabet_of_lowercase<=last_alphabet_of_lowercase;first_alphabet_of_lowercase++){

        ASCII_value_of_lowercases=first_alphabet_of_lowercase;
        printf("ASCII value of %c is\t:\t%d\n",first_alphabet_of_lowercase,ASCII_value_of_lowercases);

    }




return 0;
}
