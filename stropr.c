#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    }
    void sortWordsByLength(char words[][100], int count) {
    for (int i = 0; i < count - 1; i++) {
    for (int j = i + 1; j < count; j++) {
    if (strlen(words[i]) > strlen(words[j])) {
        swap(words[i], words[j]);
                }
            }
        }
    }
    int main() {
    char sentence[1000];
    char words[100][100];
    int i = 0, j = 0, k = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
        for (k = 0; sentence[k] != '\0'; k++) {
        if (sentence[k] == ' ' || sentence[k] == '\n') {
        words[i][j] = '\0';
        i++;
        j = 0;
        } else {
                words[i][j++] = sentence[k];
                }
            }
        int wordCount = i;
        sortWordsByLength(words, wordCount);
    
        printf("Words in ascending order of length:\n");
        for (i = 0; i < wordCount; i++) {
        printf("%s\n", words[i]);
        }
        return 0;
    }
