nums = input()
nums = nums.split()
n = int(nums[0])
m = int(nums[1])
k = int(nums[2])

if n//2 > m:
    t = m
else:
    t = n // 2
dif = n + m - t*3
s = k - dif
if s > 0:
    print(t - s//3 - (s%3!=0))
else:
    print(t)
