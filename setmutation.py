def in1():
    return (set([int(x) for x in raw_input().split(" ")]))
n=int(raw_input());
st1=set([int(x) for x in raw_input().split(" ")]);
m=int(raw_input());
for i in range(2*m):
    li= [raw_input().split(" ")];
    if(li[0]=="intersection_update"):
        st2=in1()
        st1.intersection_update(st2);
        #print (st1)
    elif(li[0]=="update"):
        st2=in1();
        st1.update(st2);
        #print (st1)
    elif(li[0]=="symmetric_difference_update"):
        st2=in1()
        st1.symmetric_difference_update(st2);
        #print (st1)
    elif(li[0]=="difference_update"):
        st2=in1();
        st1.difference_update(st2);
        #print (st1)
print (st1)
print(sum(st1));
