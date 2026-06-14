def secondLargest(nums):
    if(len(nums)==1 or len(nums)==0):
        return None
    l=nums[0]
    sl=float("-inf");

    for x in nums:
        if (x>l):
            sl=l
            l=x
        elif (x<l and x>sl):
            sl=x
    return sl if sl != float("-inf") else None

nums = [23,12]
print(secondLargest(nums))