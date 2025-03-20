void fibonaciiSeries(int n)
{
     int  y = 0, z = 1, a;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", y);
        a = y + z;
        y = z;
        z = a;
    }
    
}