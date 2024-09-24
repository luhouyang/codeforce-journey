n = int(input())
nums = [int(x) for x in input().split(' ')]
sum = 0
f_map = {}

nums.sort()

for i in range(n):
    # nums.append(int(input()))
    sum += nums[i]

    if (f_map.__contains__(nums[i])):
        f_map[nums[i]] += 1
    else:
        f_map[nums[i]] = 1

ave = sum / n * 1.0

if (n % 2 == 1):
    nm = (n + 1) / 2
    median = nums[nm]

else:
    nm_l = nums[int((n - 2) / 2)]
    nm_u = nums[int((n) / 2)]
    median = (nm_l + nm_u) / 2.0

mode = 0
mode_f = 0

for key, value in f_map.items():
    if (value > mode_f):
        mode_f = value
        mode = key

# print(nums)
print(round(ave, 1))
print(round(median, 1))
print(mode)
