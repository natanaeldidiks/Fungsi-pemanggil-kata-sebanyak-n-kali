#include <stdio.h>
#include <conio.h>

using namespace std;

int kata ()
{
    int t;
    printf ("\n Mau Cetak Berapa Kata : ");
    scanf ("%d",&t);

    for (int a=1; a<=t; a++)
    {
        printf ("\n %d. KATA  ",a);
    }
}
int main()
{
    kata();

    getch ();
    return 0;
}
