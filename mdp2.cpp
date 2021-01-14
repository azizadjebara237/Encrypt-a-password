#include <stdio.h>
#include <conio.h>

int getnombre()
{
    int c;
    int n=0;
    do
    {
        c=getch();    // attends la prochaine touche
        if (c>='0' && c<='9')  // si c'est un chiffre uniquement
        {
            n*=10;    
            n+=(c-'0');        // mise a jour de n
            printf("*");
        }
    }
    while(c!=0x0D);    // jusqu'a entrée (code 0x0D)
    printf("\n");  // revient à la ligne
    return n;
}

int main()
{
    int a;
    printf("Tapez un nombre\n");
    a=getnombre();    
    printf("Nombre = %d\n",a);
    return 0;
}

