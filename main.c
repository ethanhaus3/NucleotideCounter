/*
 ============================================================================
 Name        : EHausNucleotideCounter.c
 Author      : Ethan Haus
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);
	printf("Enter input filename:\n");
	char fileName [BUFSIZ];
	char fileName2 [BUFSIZ];
	fgets(fileName,BUFSIZ,stdin);
	int length = strlen(fileName);
	fileName[length-1] = '\0';  //check to delete \n
	printf("Enter output filename:\n");
	fgets(fileName2,BUFSIZ,stdin);
	int lenth2 = strlen(fileName2);
	fileName2[lenth2-1] = '\0';
	FILE *pIn = fopen(fileName,"r");//opening the output and input files
	FILE *ftpr = fopen(fileName2,"w");
	if (pIn){
		int countA = 0;//initializing count variables
		int countC = 0;
		int countG = 0;
		int countT = 0;
		while (!feof(pIn)){
			char nextChar = fgetc(pIn);
			switch (nextChar){
			case 'A': //checking to add to counter or not
			case 'a':
				countA++;
				break;
			case 'C':
			case 'c':
				countC++;
				break;
			case 'G':
			case 'g':
				countG++;
				break;
			case 'T':
			case 't':
				countT++;
				break;
			case '\n':
				fprintf(ftpr,"%d %d %d %d\n",countA,countC,countG,countT);//printing with format specifiers
				countA = 0;//reset count variables to 0 after printing so they count fresh for ever line
				countC = 0;
				countG = 0;
				countT = 0;
			}

		}
		printf("Complete\n");//print complete message so user knows code has executed
		fclose(ftpr);//close files
		fclose(pIn);
	}
	return EXIT_SUCCESS;
}
