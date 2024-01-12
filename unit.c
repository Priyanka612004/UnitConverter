#include <stdio.h>
int main()
{
    int n, num;
    float nu;
    printf(".......UNIT CONVERSION......\n");
    printf("1.Length\t2.Area\t3.Volume\t4.Speed\t5.Weight\t6.Temperature\n");
    scanf("%d", &n);
    switch (n)

    {
    case 1: // for LENGTH CONVERSION//

        printf("1.cm\t2.m\t3.km\t4.mm\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("1.m\t2.km\t3.mm\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cm=%f\t\tm=%f", nu, nu / 100);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cm=%f\t\tkm=%f", nu, nu / 100000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cm=%f\t\tmm=%f", nu, nu * 10);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 2:
            printf("1.cm\t2.km\t3.mm\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m=%f\t\tcm=%f", nu, nu * 100);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m=%f\t\tkm=%f", nu, nu / 1000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m=%f\t\tmm=%f", nu, nu * 1000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 3:
            printf("1.cm\t2.m\t3.mm\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km=%f\t\tcm=%f", nu, nu * 100000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km=%f\t\tm=%f", nu, nu * 1000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km=%f\t\tmm=%f", nu, nu * 1000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 4:
            printf("1.cm\t2.m\t3.km\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("mm=%f\t\tcm=%f", nu, nu / 10);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("mm=%f\t\tm=%f", nu, nu / 1000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("mm=%f\t\tkm=%f", nu, nu / 1000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;
        default:
            printf("invalid choice");
            break;
        }
        break;

    case 2: // for AREA CONVERSION//
        printf("1.sq cm\t2.sq m\t3.sq km\t4.sq mm\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("1.sq m\t2.sq km\t3.sq mm\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq cm=%f\t\tsq m=%f", nu, nu / 10000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq cm=%f\t\tsq km=%f", nu, nu / 10000000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq cm=%f\t\tsq mm=%f", nu, nu * 100);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 2:
            printf("1.sq cm\t2.sq km\t3.sq mm\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq m=%f\t\tsq cm=%f", nu, nu * 10000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq m=%f\t\tsq km=%f", nu, nu / 1000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq m=%f\t\tsq mm=%f", nu, nu * 1000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 3:
            printf("1.sq cm\t2.sq m\t3.sq mm\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq km=%f\t\tsq cm=%f", nu, nu * 10000000000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq km=%f\t\tsq m=%f", nu, nu * 1000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq km=%f\t\tsq mm=%f", nu, nu * 1000000000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 4:
            printf("1.sq cm\t2.sq m\t3.sq km\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq mm=%f\t\tsq cm=%f", nu, nu / 100);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq mm=%f\t\tsq m=%f", nu, nu / 1000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("sq mm=%f\t\tsq km=%f", nu, nu / 1000000000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;
        default:
            printf("invalid choice");
            break;
        }
        break;

    case 3: // for VOLUME CONVERSION//
        printf("1.cu cm\t2.cu m\t3.cu mm\t4.l\t5.ml\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("1.cu m\t2.cu mm\t3.l\t 4.ml\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu cm=%f\t\tcu m=%f", nu, nu / 1000000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu cm=%f\t\tcu mm=%f", nu, nu * 1000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu cm=%f\t\tl=%f", nu, nu / 1000);
                break;
            case 4:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu cm=%f\t\tml=%f", nu, nu * 1);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 2:
            printf("1.cu cm\t2.cu mm\t3.l\t4.ml\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu m=%f\t\tcu cm=%f", nu, nu * 1000000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu m=%f\t\tcu mm=%f", nu, nu * 1000000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu m=%f\t\tl=%f", nu, nu * 1000);
                break;

            case 4:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu m=%f\t\tml=%f", nu, nu * 1000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 3:
            printf("1.cu cm\t2.cu m\t3.l\t4.ml\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu mm=%f\t\tcu cm=%f", nu, nu / 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu mm=%f\t\tcu m=%f", nu, nu * 1000000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu mm=%f\t\tl=%f", nu, nu / 1000000);
                break;

            case 4:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("cu mm=%f\t\tml=%f", nu, nu / 1000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 4:
            printf("1.cu cm\t2.sq m\t3.cu mm\t4.ml\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("l=%f\t\tcu cm=%f", nu, nu * 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("l=%f\t\tcu m=%f", nu, nu / 1000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("l=%f\t\tcu mm=%f", nu, nu * 1000000);
                break;

            case 4:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("l=%f\t\tml=%f", nu, nu * 1000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 5:

            printf("1.cu cm\t2.cu m\t3.cu mm\t 4.l\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("ml=%f\t\tcu cm=%f", nu, nu * 1);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("ml=%f\t\tcu m=%f", nu, nu / 1000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("ml=%f\t\tmm=%f", nu, nu * 1000);
                break;
            case 4:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("ml=%f\t\tl=%f", nu, nu / 1000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        default:
            printf("invalid choice");
            break;
        }
        break;

    case 4: // for SPEED CONERSION//

        printf("1.km/s\t2.m/s\t3.km/h\t4.m/h\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("1.m/s\t2.km/h\t3.m/h\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km/s=%f\t\tm/s=%f", nu, nu * 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km/s=%f\t\tkm/h=%f", nu, nu * 3600);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km/s=%f\t\tm/h=%f", nu, nu * 2237);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 2:
            printf("1.km/s\t2.km/ht3.m/h\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m/s=%f\t\tkm/s=%f", nu, nu / 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m/s=%f\t\tkm/h=%f", nu, nu * 3.6);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m/s=%f\t\tm/h=%f", nu, nu * 2.237);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 3:
            printf("1.km/s\t2.m/s\t3.m/h\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km/h=%f\t\tkm/s=%f", nu, nu / 3600);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km/h=%f\t\tm/s=%f", nu, nu / 3.6);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("km/h=%f\t\tm/h=%f", nu, nu / 1.609);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 4:
            printf("1.km/s\t2.m/s\t3.km/h\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m/h=%f\t\tkm/s=%f", nu, nu / 2237);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m/h=%f\t\tm/s=%f", nu, nu / 2.237);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("m/h=%f\t\tkm/h=%f", nu, nu * 1.609);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;
        default:
            printf("invalid choice");
            break;
        }
        break;

    case 5: // for WEIGHT CONVERSION//
        printf("1.g\t2.mg\t3.kg\t4.t\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("1.mg\t2.kg\t3.t\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("g=%f\t\tmg=%f", nu, nu * 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("g=%f\t\tkg=%f", nu, nu / 1000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("g=%f\t\tt=%f", nu, nu / 1000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 2:
            printf("1.g\t2.kg\t3.t\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("mg=%f\t\tg=%f", nu, nu / 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("mg=%f\t\tkg=%f", nu, nu / 1000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("mg=%f\t\tt=%f", nu, nu / 1000000000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 3:
            printf("1.g\t2.mg\t3.t\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("kg=%f\t\tg=%f", nu, nu * 1000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("kg=%f\t\tmg=%f", nu, nu * 1000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("kg=%f\t\tt=%f", nu, nu / 1000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 4:
            printf("1.g\t2.mg\t3.kg\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("t=%f\t\tg=%f", nu, nu * 1000000);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("t=%f\t\tmg=%f", nu, nu * 1000000000);
                break;

            case 3:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("t=%f\t\tkg=%f", nu, nu * 1000);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;
        default:
            printf("invalid choice");
            break;
        }
        break;

    case 6: // for TEMPERATURE//
        printf("1.C\t2.K\t3.F\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:

            printf("1.K\t2.F\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("C=%f\t\tK=%f", nu, nu + 273.15);
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("C=%f\t\tF=%f", nu, ((nu * 9 / 5) + 32));
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 2:
            printf("1.C\t2.F\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("K=%f\t\tC=%f", nu, (nu - 273.15));
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("K=%f\t\tF=%f", nu, (nu - 273.15) * 9 / 5 + 32);
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        case 3:
            printf("1.C\t2.K\n");
            scanf("%d", &num);
            switch (num)
            {
            case 1:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("F=%f\t\tC=%f", nu, ((nu - 32) * 5 / 9));
                break;

            case 2:
                printf("enter your number: ");
                scanf("%f", &nu);
                printf("F=%f\t\tK=%f", nu, ((nu - 32) * 5 / 9 + 273.15));
                break;

            default:
                printf("invalid choice");
                break;
            }
            break;

        default:
            printf("invalid choice");
            break;
        }
        break;

    default:
    printf("invalid choice");
        break;
    }
}