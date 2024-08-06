bool isPalindrome(int x) 
{
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int nx = x;
    long long y = 0;
    while (nx > 0) 
    {
        y = y*10 + nx%10;
        nx /= 10;
    }
    if (x == y)
        return true;
    else
        return false;
}
