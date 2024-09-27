#include "slide_line.h"

/**
 * slide_left - Slide and merge an array of integers to the left
 *
 * @line: Pointer to the array of integers
 * @size: Number of elements in line
 */
void slide_left(int *line, size_t size)
{
    size_t pos = 0;

    //slide
    for (size_t i = 0; i < size; i++)
    {
        if (line[i] != 0)
        {
            if (pos != i)
            {
                line[pos] = line[i];
                line[i] = 0;
            }
            pos++;
        }
    }

    //merge
    for (size_t i = 0; i < size - 1; i++)
    {
        if (line[i] == line[i + 1] && line[i] != 0)
        {
            line[i] *= 2;
            line[i + 1] = 0;
            i++;
        }
    }

    //slide
    pos = 0;

    for (size_t i = 0; i < size; i++)
    {
        if (line[i] != 0)
        {
            if (pos != i)
            {
                line[pos] = line[i];
                line[i] = 0;
            }
            pos++;
        }
    }
}


/**
 * slide_right - Slide and merge an array of integers to the left
 * 
 * @line: Pointer to the array of integers
 * @size: Number of elements in line
 */
void slide_right(int *line, size_t size)
{
    ssize_t pos = size - 1;

    //slide
    for (ssize_t i = size - 1; i >= 0; i--)
    {
        if (line[i] != 0)
        {
            if (pos != i)
            {
                line[pos] = line[i];
                line[i] = 0;
            }
            pos--;
        }
    }

    //merge
    for (ssize_t i = size - 1; i > 0; i--)
    {
        if (line[i] == line[i - 1] && line[i] != 0)
        {
            line[i] *= 2;
            line[i - 1] = 0;
            i--;
        }
    }

    //slide
    pos = size - 1;
    for (ssize_t i = size - 1; i >= 0; i--)
    {
        if (line[i] != 0)
        {
            if (pos != i)
            {
                line[pos] = line[i];
                line[i] = 0;
            }
            pos--;
        }
    }
}


/**
 * slide_line - Slide and merge an array of integers
 * 
 * @line: Pointer to the array of integers
 * @size: Number of elements in @line
 * @direction: SLIDE_LEFT or SLIDE_RIGHT
 */
int slide_line(int *line, size_t size, int direction)
{
    if (direction == SLIDE_LEFT)
        slide_left(line, size);
    else if (direction == SLIDE_RIGHT)
        slide_right(line, size);
    else
        return (0);
    return (1);
}
