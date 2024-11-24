# NucleotideCounter
Counts Nucleotides from a given user input


Prompts the user for an input filename.   The last character of this prompt must be a new line character (\n).

Gets the input filename from stdin.

Prompts the user for an output filename.   The last character of this prompt must be a new line character (\n).

Gets the filename from stdin.

Opens the input file for reading.

Opens the output file for writing.

Reads nucleotide sequences from the input file. 
Do not prompt the user for the nucleotides, just use fgetc() to get each character.
Each sequence consists of a series of A, C, G, or T characters, terminated by a \n.

After each sequence is received, the number of A's, C's, G's, and T's are output on a single line to the file.  Separate the number of A's, C's, G's, and T's by a single space.

When an EOF is returned by fgetc(), the program closes the input and output files.

Prints "Complete\n" to stdout.
