#include <stdio.h>
main()
{
    float a;
    printf("ENTER THE M.R.P.:\n");
    scanf("%f", &a);
    if((a>=0)&&(a<1000))
    {
        printf("No Discount available for your purchase.\nAmount Payable:%f", a);
    }
    else
    {
        if((a>=1000)&&(a<5000))
        {
            printf("Discount:%f", a*0.1);
            printf("\nAmount Payable:%f", a-(a*0.1));
        }
        else
        {
            if((a>=5000)&&(a<10000))
            {
                printf("Discount:%f", a*0.2);
                printf("\nAmount Payable:%f", a-(a*0.2));
            }
            else
            {
                printf("Discount:%f", a*0.3);
                printf("\nAmount Payable:%f", a-(a*0.3));
            }
        }
    }
}
