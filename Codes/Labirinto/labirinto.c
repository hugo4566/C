#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // the file we want to read from
    char filename[] = "arquivo.txt";

    // open the file for reading
    FILE *file = fopen(filename, "r");

    // make sure the file opened properly
    if(NULL == file)
    {
        fprintf(stderr, "Cannot open file: %s\n", filename);
        return 1;
    }

    // set up the buffer to read the line into. Don't worry too much
    // if some of the lines are longer than 80 characters - the buffer
    // will be made bigger if need be.
    size_t buffer_size = 80;
    char *buffer = malloc(buffer_size * sizeof(char));

    // read each line and print it to the screen
    int line_number = 0;
    while(-1 != getline(&buffer, &buffer_size, file))
    {
        printf("%d: %s", ++line_number, buffer);
    }
    fflush(stdout);

    // make sure we close the file and clean up the buffer when we're
    // finished
    fclose(file);
    free(buffer);

    return 0;
}

