/*************************************************************************
    > File Name: more02.c
    > Author: 
    > Mail: 
    > Created Time: 2015年09月10日 星期四 23时10分06秒
 ************************************************************************/

#include<stdio.h>
#define PAGELEN 24
#define LINELEN 512
void do_more(FILE *);
int see_more(FILE *);
int main(int ac, char *av[])
{
    FILE *fp;
    if(ac == 1)
    {
        do_more(stdin);
    }
    else
        while(--ac)
            if((fp = fopen(*++av, "r")) != NULL)
            {
                do_more(fp);
                fclose(fp);
            }
            else
                exit(1);
        return 0;
}
void do_more(FILE *FP)
/*
 * read PAGELEN lines, then call see_more() for further instructions
 */
{
    char line[LINELEN];
    int num_of_lines = 0;
    int see_more(FILE *), reply;
    FILE* fp_tty;
}