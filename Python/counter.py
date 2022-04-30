import collections


count = collections.Counter()

count['a'] += 1

print(max(count.values()))