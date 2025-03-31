isPrime(int a)
{
    int c=0;
    for(int i=0;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c>0)
    {
        return 1;
    }
    else{
        return 0;
    }
}