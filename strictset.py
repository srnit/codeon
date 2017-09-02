a=set((raw_input().split()));
len1=len(a);
count=0;
n=int(raw_input())
for i in range(n):
	b=set((raw_input().split()));
	len2=len(b);
	c=a.difference(b);
	len3=len(c);
	if(len3==len1-len2 and len2<len1):
		count=count+1;
if(count==n):
	print ("True");
else:
	print ("False");


