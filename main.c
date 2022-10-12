int ft_isdigit(int c)
{
    char digits[] = "0123456789";
    char *numb = digits;

    while(*numb != '\0' && *numb != c)
        ++numb;

    if (*numb)
        return 1;
    return 0;
}


int main()
{
    
    ft_isdigit(231.2);
    return 0;
}