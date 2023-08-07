#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and writes its content to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters to read and print.
 *
 * Return: On success, returns the number of letters read and printed.
 *         On failure or if @filename is NULL - returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_descriptor, read_chars, write_chars;
    char *buffer;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
    {
        free(buffer);
        return (0);
    }

    read_chars = read(file_descriptor, buffer, letters);
    if (read_chars == -1)
    {
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    write_chars = write(STDOUT_FILENO, buffer, read_chars);
    if (write_chars == -1 || write_chars != read_chars)
    {
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    free(buffer);
    close(file_descriptor);

    return (write_chars);
}

