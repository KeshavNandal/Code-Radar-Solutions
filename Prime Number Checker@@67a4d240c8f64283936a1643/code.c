isPrime()
{
    if(num==2)
    {
        printf("1");
        return 0;
    }
    for(int i=2;i=num/2;i++)
    {
        if(num%i==0)
        {
            printf("0");
            return 0;
        }
      
    }
         printf("1");
}