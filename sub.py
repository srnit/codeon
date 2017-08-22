def count_substring(string, sub_string):
    length=len(string);
    iden=0;
    iden=int(iden)
    end=len(string);
    end=int(end);
    
    count=0;
    while(1):
        if(string.find(iden,sub_string,end)>=0):
            count+=1;
            iden=string.find(iden,sub_string)+length-1;
        else:
            break;
        
    return count
print(count_substring(raw_input(),"cdc"));