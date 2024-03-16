#include<stdio.h>
int main(void)
{
    int nota;
    printf("Jepni noten ne formen numerike\n");
    scanf("%d",&nota);


    switch(nota/10)
    {
        case 10:
        case 9:
            printf("Nota me shkronje eshte:A\n");
            break;
        case 8:
            printf("Nota me shkronje eshte:B\n");
            break;
        case 7:
            printf("Nota me shkronje eshte:C\n");
            break;
        case 6:
            printf("Nota me shkronje eshte:D\n");
        default:
            printf("Nota me shkronje eshte:F\n");
    }
       }


    return 0;
