/**
 * print_name - print name
 * @name: name of person
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
