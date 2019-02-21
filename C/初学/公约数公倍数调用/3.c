int may(int a,int b)
{
    int i,r;
    for(i=(a<b?a:b); i>=2; i--)

        if(a%i==0&&b%i==0)
        {
            r=i;
            break;
        }

    return(r);

}



int mib(int a,int b)
{
    int  i,r=0;
    for(i=(a<b?b:a); r==0; i++)
        if(i%a==0&&i%b==0)
        {
            r=i;
            break;
        }
    return(r);
}

