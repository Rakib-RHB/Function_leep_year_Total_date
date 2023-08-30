int numberofDays(int year)
{
    int days;
    if (year%400 == 0)
        days = 366;
    else if (year%100 == 0)
        days = 365;
    else if (year%4 == 0)
        days = 366;
    else days = 365;
    return days;
}
void main(void)
{
    int y,p;
    scanf("%d",&y);
    p = numberofDays(y);
    printf("Number of days %d\n",p);
    if(p == 366) printf("LEAP YEAR");
    else printf("Not a Leap Year ");
}
