n = int(raw_input())
for i in range(n):
    if i == 0:
        gems = set(raw_input())
    else:
        gems = gems.intersection(set(raw_input()))
print len(gems)
