#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, returns 1.
 *         On failure, if @filename is NULL, or the user lacks write permissions - returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, write_chars, content_length = 0;

    if (filename == NULL)
        return (-1);

    if (text_content != NULL)
    {
        for (content_length = 0; text_content[content_length]; content_length++)
            continue;
    }

    file_descriptor = open(filename, O_WRONLY | O_APPEND);
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

