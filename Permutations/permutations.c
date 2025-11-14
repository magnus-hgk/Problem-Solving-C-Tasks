#include <stdio.h>
 /*
    WIP - not very good at all, wanted to return all permutations of a given str
    Seems like to do that you have to save and swap between variables and then print
    it's late and i wanna go to bed
 */
int main(void)
{
    char str[] ={'a','l','m','p','r','i','s','-','1','9'};
    int len = sizeof(str) / sizeof(str[0]);
    for (int i = 0; i < sizeof(str); i++)
    {
        for (int j = 0; j < sizeof(str); j++)
        {
            printf("%c",str[i]);
        }
        
    }
    printf("\n");
    return 0;
}