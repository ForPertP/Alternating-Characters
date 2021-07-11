int alternatingCharacters(string s)
{
    int result = 0;

    for (size_t i = 0; i < s.size()-1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            result++;
        }
    }
    
    return result;
}
