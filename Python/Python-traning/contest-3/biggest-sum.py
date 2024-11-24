n = int(input())
nums = list(map(int, input().split()))

nums.sort()

positive_sum = nums[n - 1] * nums[n - 2] * nums[n - 3]
negative_sum = nums[0] * nums[1] * nums[n - 1]

result = positive_sum if positive_sum > negative_sum else negative_sum

print(result)
