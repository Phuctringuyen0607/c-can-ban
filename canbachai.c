float tinhCanBacHai(float a, float b, float c)
{
    float delta, x1, x2, x;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem");
            else if (c != 0)
                printf("Phuong trinh vo nghiem");
        }
        else
            printf("Phuong trinh co nghiem la : x = %.2f", -c / b);
    }
    else
    {
        delta = (b * b) - (4 * a * c);
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet la x1=%.2f va x2=%.2f", x1, x2);
        }
        else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep la x1=x2=%.2f", x1);
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
    }
}