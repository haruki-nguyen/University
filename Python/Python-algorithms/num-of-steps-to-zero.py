class Solution:
    def numberOfSteps(self, num: int) -> int:
        count = 0

        while num != 0:
            if num % 2 == 0:
                num /= 2
            else:
                num -= 1

            count += 1

        return count


# solution = Solution()

# print(solution.numberOfSteps(14))
# print(solution.numberOfSteps(8))
# print(solution.numberOfSteps(123))
