/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    char word[20000][51] = {0,};
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%s", &word[i]);
        if(i != 0){
            for(int j = i;strlen(word[j]) <= strlen(word[j - 1]) && j >= 0;j--){
                char temp[51];
                strcpy(temp, word[j]);
                strcpy(word[j], word[j - 1]);
                strcpy(word[j - 1], temp);
                while(strlen(word[j]) == strlen(word[j - 1])){
                    for(int k = 0; k < strlen(word[j]); k++){
                        if(word[j][k] == word[j-1][k]){
                            continue;
                        }
                        else if(word[j][k] < word[j-1][k]){
                            strcpy(temp, word[j]);
                            strcpy(word[j], word[j - 1]);
                            strcpy(word[j - 1], temp);
                        }
                        
                        
                    }
                }
            }
            
            
            
        }
    }
    return 0;
}


