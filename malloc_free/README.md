C - malloc, free
En este proyecto, aprendí sobre la diferencia entre asignación automática y asignación dinámica, así como el uso de malloc, free y valgrind en C.

Archivo de encabezado📁
holberton.h: Archivo de encabezado que contiene los prototipos de todas las funciones escritas en el proyecto.

Archivos y prototipos
0-create_array.c: char *create_array(unsigned int size, char c);
1-strdup.c: char *_strdup(char *str);
2-str_concat.c: char *str_concat(char *s1, char *s2);
3-alloc_grid.c: int **alloc_grid(int width, int height);
4-free_grid.c: void free_grid(int **grid, int height);
5-argstostr.c: char *argstostr(int ac, char **av);
100-strtow.c: char **strtow(char *str);

Tareas📃
0. Flota como una mariposa, pica como una abeja

0-create_array.c: función en C que devuelve un puntero a un espacio de memoria recién asignado que contiene una matriz de caracteres.
La matriz de caracteres se inicializa con el carácter especificado en el parámetro c.
Si la función falla o recibe un tamaño (size) igual a 0, devuelve NULL.

La mujer que no tiene imaginación no tiene alas
1-strdup.c: función en C que devuelve un puntero a un espacio de memoria recién asignado que contiene una copia de la cadena pasada como parámetro.
Devuelve un puntero a una nueva cadena que es una copia exacta de la cadena str.
La memoria para la nueva cadena se obtiene con malloc y se puede liberar con free.
Si str es NULL o no hay suficiente memoria disponible, devuelve NULL.

El que no es lo suficientemente valiente para tomar riesgos no logrará nada en la vida
2-str_concat.c: función en C que devuelve un puntero a un espacio de memoria recién asignado que contiene la concatenación de dos cadenas pasadas como parámetros.
El puntero devuelto contiene el contenido de s1 seguido de s2 y termina con un carácter nulo.
La función trata NULL como una cadena vacía.
Si la función falla, devuelve NULL.