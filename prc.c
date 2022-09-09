#include <stdio.h>



int main(int argc, char **argv)

{

    char c;

    FILE *fp;



    if (argc >= 2)

         fp = fopen(argv[1], "w");

    else fp = fopen("file.txt", "w");



    while ((c = getchar()) != EOF)

    {

        putc(c, fp);

    }



    return 0;

}
