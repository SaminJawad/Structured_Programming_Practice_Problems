#include<stdio.h>
#include<string.h>
int main(){

    char word[5][100],word_2[5][100];
    int i,j,length;

    for(i=0;i<5;i++){
        printf("Enter words\t:\t");
        gets(word[i]);
    }

    for(i=0;i<5;i++){
        length=strlen(word[i]);
            for(j=0;j<length;j++){
                if(word[i][j]=='a' || word[i][j]=='e' || word[i][j]=='i' || word[i][j]=='o' || word[i][j]=='u'){
                    word_2[i][j]=word[i][j]-32;
                }
                else if(word[i][j]!='a' || word[i][j]!='e' || word[i][j]!='i' || word[i][j]!='o' || word[i][j]!='u'){
                    word_2[i][j]=word[i][j]+32;
                }
                else{
                    word_2[i][j]=word[i][j];
                }
            }
            word_2[i][length] = '\0';
    }


    printf("\n");
    for(i=0;i<5;i++){
        puts(word_2[i]);
    }

return 0;
}
