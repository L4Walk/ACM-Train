// P2433 �����1-2��Сѧ��ѧ N ��һ
/*

# include <stdio.h>
# include <math.h>
# include <iostream>
using namespace std;

void Problem1()
{
    printf("I love Luogu!");

}

void Problem2()
{
    int ANum, UimNum;

    ANum = 2;
    UimNum = 4;


    printf("%d %d", ANum + UimNum, 10 - ANum - UimNum);
}

void Problem3()
{
    int total;

    total = 14;

    printf("%d\n%d\n%d\n", total / 4, total / 4 * 4, total - total / 4 * 4);

}

void Problem4()
{
    float t;
    int stu;

    t = 500.0;
    stu = 3;

    printf("%.3f\n", t / stu);

}

void Problem5()
{
    int ALong, BLong, ASpeed, BSpeed;

    ALong = 260;
    BLong = 220;
    ASpeed = 12;
    BSpeed = 20;

    printf("%d", (ALong + BLong) / (ASpeed + BSpeed));  // �������������⣬�ѳ�β����A��B���㣬������·�̼��������ȡ�������������⹫ʽ������ʱ��=·�̡��ٶȺ� �������

}

void Problem6()
{
    int x, y;
    x = 6;
    y = 9;
    cout << sqrt(x * x + y * y);
}

void Problem7()
{
    int total;

    total = 100;

    printf("%d\n%d\n%d\n", total + 10, total + 10 - 20, 0);

}

void Problem8()
{
    const double pi = 3.141593;
    cout << pi * 10 << endl << pi * 25 << endl << 4  * pi * 125 / 3 << endl;
}

void Problem9()
{
    int total, i;

    total = 1;

    for (i = 1; i <= 3; i++)
    {
        total = (total + 1) * 2;
    }

    printf("%d", total);
}

void Problem10()
{
   /*
     ţ�Բ�����
     ���ţ�Բ����ⳣ�õ��ĸ�������ʽ���ֱ��ǩU
    ��1���ݵ������ٶ�= ����Ӧ��ţͷ�����ԵĽ϶���������Ӧ��ţͷ�����ԵĽ����������£��ԵĽ϶��������ԵĽ�����������
    ��2��ԭ�в���=ţͷ�����Ե��������ݵ������ٶȡ��Ե�������`
    ��3���Ե�����=ԭ�в����£�ţͷ�����ݵ������ٶȣ���
    ��4��ţͷ��=ԭ�в����³Ե�����+�ݵ������ٶȡ�

     xΪԭ���������� yΪ��λʱ��������������

     x+30y=30��8
     x+6y=6��10

     �ⷽ��
     x = 15
     y = 7.5

     �����ܹ���Ҫ 15 / 10 +7.5 = 9 ̨
   */
/*
    printf("%d", 9);
}

void Problem11()
{
    cout << 1.0 * 100 / 3;
}

void Problem12()
{
    char x = 'A';
    char y = 'M';

    printf("%d\n%c\n", y - x + 1, x + 18 - 1);
}

void Problem13()
{
    #define PI 3.141593

    printf("%.f", pow( 4 * PI * pow(4, 3) / 3 + 4 * PI * pow(10, 3) / 3, 1.0 / 3) );
}

void Problem14()
{
    int price, num, total, priceMin;

    total = 0;
    price = 110;
    num = 10;
    priceMin = 0;

    while (price != 0)
    {
        price--;
        num++;
        total = num * price;

        if (total == 3500)
        {
            priceMin = price;
        }
    }

    if (priceMin == 0)
    {
        priceMin = 110;
        num = 10;
        while (total != 3500)
        {
            priceMin++;
            num--;
            total = num * priceMin;
        }
    }

    printf("%d", priceMin);
}
*/
/*int main()
{
    int T;

    scanf_s("%d", &T);

    if (T == 1)
    {
        Problem1();
    }
    else if (T == 2)
    {
        Problem2();
    }
    else if (T == 3)
    {
        Problem3();
    }
    else if (T == 4)
    {
        Problem4();
    }
    else if (T == 5)
    {
        Problem5();
    }
    else if (T == 6)
    {
        Problem6();
    }
    else if (T == 7)
    {
        Problem7();
    }
    else if (T == 8)
    {
        Problem8();
    }
    else if (T == 9)
    {
        Problem9();
    }
    else if (T == 10)
    {
        Problem10();
    }
    else if (T == 11)
    {
        Problem11();
    }
    else if (T == 12)
    {
        Problem12();
    }
    else if (T == 13)
    {
        Problem13();
    }
    else if (T == 14)
    {
        Problem14();
    }


    return 0;
}
*/