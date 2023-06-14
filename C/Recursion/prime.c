prime(n,i)  //i=n/2
{
    if(i==1)
    retun 1;
    else if(n%i==0)
    retun 0;
    else retun prime(n,i-1)
}