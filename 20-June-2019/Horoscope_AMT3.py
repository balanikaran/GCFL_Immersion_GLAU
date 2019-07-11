def check(s):
    ch1 = 0
    ch2 = 0
    for ch in s:
        if ch == 'A':
            ch1 = ch1 + 1
        elif ch == 'B':
            ch2 = ch2 + 1
        else:
            return "NO"
        
    if(ch1 == ch2):
        return "YES"
    
    return "NO"

t = int(input())

while t:
    s = str(input())
    
    if len(s) % 2 == 1:
        # odd
        print("NO")
    else:
        print(check(s))
    t = t - 1