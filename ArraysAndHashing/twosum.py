class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        : :rtype: List[int]
        """
        map_ = {}
        for i, n in enumerate(nums):
            diff = target - n
            if diff in map_:
                return [map_[diff], i]
            map_[n] = i
        
       
