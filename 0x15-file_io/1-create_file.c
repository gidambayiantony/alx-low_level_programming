#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: On success, returns 1.
 *         On failure or if @filename is NULL - returns -1.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, write_chars, content_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (content_length = 0; text_content[content_length]; content_length++)
            continue;
    }

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_descriptor == -1)
        return (-1);

    write_chars = write(file_descriptor, text_content, content_length);
    if (write_chars == -1)
    {
        close(file_descriptor);
        return (-1);
    }

    close(file_descriptor);
    return (1);
}

