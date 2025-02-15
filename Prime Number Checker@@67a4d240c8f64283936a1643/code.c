int isPrime(int x)
{
    if(x==2)
    {
        return 1;
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
      
    }
          return 1;
}