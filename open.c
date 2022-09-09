#include "monty.h"

void _push(char *str)
{
char string[600];
if ( strlen(str) == strlen( sprintf(string ,atoi(str)) ) ) {
    //its an integer

printf("i've been pushed i'm victim %s\n", s);
}

int main(int argc, char **argv)
{
	FILE *fp;
	char *str = NULL;
	size_t len;
	char *p1;
	char *p2;
	int line_num = 0;

/*check if correct argument is passed */
	if (argc == 1 || argc > 2)
	{
		fprintf( stderr, "%d USAGE: monty file\n", argc);
		exit(EXIT_FAILURE);
	}
	else
	{
		fp = fopen(argv[1], "r");
		if (fp == NULL)
		{
			fprintf(stderr,"Error: Can't open file %s", argv[1]);
		}
	};
	while ( getline(&str, &len, fp) != -1)
	{

	line_num++;
	p1 = strtok(str," ");
	p2 = strtok(NULL," ");
	get_opcodes(p1)(atoi(p1));
	}
	free(str);	
	fclose(fp);
    return 0;
}