#include <stdio.h>

int main()
{

    char input;
    float KmphtoMph = 0.621371;
    float Kmphtomps = 0.277778;
    float Mphtomps = 0.44704;
    float KmphtoKnot = 0.539957;
    float first, second;

    while (1)
    {
        printf("Enter the input character. Press q to quit\n 1. Kmph to Mph\n 2. Kmph to Mps\n 3.Mph to Mps\n 4.Kmph to Knot\n");

        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the Program Succesfully......");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * KmphtoMph;
            printf("%.3f Kmph is equal to %.3f Mph\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Kmphtomps;
            printf("%.3f Kmph is equal to %.3f mps\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * Mphtomps;
            printf("%.3f Mph is equal to %.3f mps\n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * KmphtoKnot;
            printf("%.3f Kmph is equal to %.3f Knot\n", first, second);
            break;

        default:
            printf("In default now\n");
            break;
        }    
    }
    end:

    return 0;
}