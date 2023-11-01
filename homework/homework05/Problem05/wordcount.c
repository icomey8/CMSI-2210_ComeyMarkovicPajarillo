#include <stdio.h>
#include <stdlib.h>
// Write a C program wordcount.c that counts the number of words in a file of text. 
// Your program should take a file name as a command line argument. 
// As you read the file contents, keep a count of the number of words which are separated by whitespace. 
// [Research what is meant by "whitespace" in the C environment.] 
// When the file has been completely read, close the file and display the number of words. 
// Be sure you handle error conditions like files that don't exist or errors while reading the file. 
//nYou should also be able to handle files that are in different directories from where your program resides.



// ask user the name of the file
// ask user what directory/folder the file is in
    // add a check to make sure what they entered in a txt file
    // add a check to make sure the file exists
// count words in file
// close file, then display the number of words


int main() {

    FILE *fptr;
    char file_path[50];
    int i = 0;
    int words;
    int characters;
    char c;


    printf("Please enter the file name with the full file path: \n\n example: /Users/username/Desktop/folder/file.txt \n\n");
    scanf("%s", &file_path);

/*
    while (file_path[i] !=  '\0'){
        printf("%c", file_path[i]);
        i++;
    }
*/
  
    fptr = fopen(file_path, "r");
    if (fptr == NULL) {
        printf("\n this is not a valid file path...");
        exit(EXIT_FAILURE);
    }



    words = 0;
    while ((c = fgetc(fptr)) != EOF){
        characters++;

        if (c == ' ' || c == '\t' || c == '\n' || c == '\0') {
            words++;
        }
    }

    if (characters > 0) {
        words++;
    }


    printf("\n The total number of words in this file is: %d\n", words);
    fclose(fptr);
    return 0;






}