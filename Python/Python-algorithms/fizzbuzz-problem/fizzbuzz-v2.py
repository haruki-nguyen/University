from typing import List


class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = []

        for i in range(1, n + 1, 1):
            currStr = ""
            if i % 3 == 0:
                currStr += "Fizz"

            if i % 5 == 0:
                currStr += "Buzz"

            if currStr == "":
                currStr += str(i)

            answer.append(currStr)

        return answer


# Time complexity: O(n)
# Space complexity: O(1)
