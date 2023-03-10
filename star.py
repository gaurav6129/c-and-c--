def power_digit(n):
    s = str(n)
    minDigit = 9
    minDigitIndex = 0
    for i in range(0, len(s)):
        if s[i] - '0' < minDigit:
            minDigit = s[i] - '0'
            minDigitIndex = i
    s.erase(minDigitIndex, 1)
    return int(s)

n = int(input())
print(power_digit(n))