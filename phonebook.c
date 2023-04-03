#include <stdio.h>
#include <cs50.h>

int main()
{
    FILE *file = fopen("addressbook.csv", "a");

    if (file == NULL)
    {
        return 1;
    }
    int _id = get_int("_id");
    char *name = get_string("name :");
    char *address = get_string("address :");
    int age = get_int("age:");

    fprintf(file, "%i,%s,%s,%i\n",_id, name,address,age);

    fclose(file);
}