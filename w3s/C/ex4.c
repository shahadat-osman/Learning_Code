#include <stdio.h>

int main()
{
    printf("1\nHello World!\nI am learning C.\nAnd it's awesome!\n");      // HERE, "\n" breaks the line
    printf("2\nHello\tWorld!\n");                                          // HERE, "\t" creates a tab
    printf("3\nHello\\World!\n");                                          // HERE, "\\" inserts a backslash(\) character
    printf("4\nHello \"World!\"\n");                                       // HERE, \" inserts a double quote character.

    return 0;
}
