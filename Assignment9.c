#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];

    // Create and write to file
    fp = fopen("student.txt", "w");

    printf("Enter your name: ");
    scanf("%49s", name);

    fprintf(fp, "%s", name);
    fclose(fp);

    // Read from file
    fp = fopen("student.txt", "r");

    fscanf(fp, "%49s", name);

    printf("Name stored in file: %s", name);

    fclose(fp);

    return 0;
}
