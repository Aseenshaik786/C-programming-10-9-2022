#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];
    
    FILE *fptr;

    
    fptr = fopen("C:/Users/Asif Hussain/Documents/aseen.txt", "w");
	   if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}

