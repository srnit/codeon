def swap_case(s):
    r= ""
    for i in s:
        if(i.islower()):
            r+=i.upper();
        elif(i.isupper()):
            r+=i.lower()
    return r

str1=raw_input();
print(swap_case(str1));