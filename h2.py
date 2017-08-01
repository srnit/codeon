n=int(raw_input());
for i in range(n):
    arr = [int(x) for x in raw_input().split()]
for i in range(n):
    arr1 = [int(x) for x in raw_input().split()]
arr.sort()
arr1.sort()
for i in range(n):
    result+=abs(arr[i]-arr1[i]);
print result;