class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numToIndex = {}
        for i, currNum in enumerate(nums):
            complement = target - currNum
            if complement in numToIndex:
                return [numToIndex[complement], i]
            numToIndex[currNum] = i
        return []