int isPrime(int x)
{
    if(x==2)
    {
        return 1;
    }
    else if(x==1||x==0)
    {
        return 0;
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