class Solution(object):
    def majorityElement(self, nums):
        
        dict={}
        for i in nums:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        maxi=0
        max_key=-1
        for i in dict:
            if dict[i]>maxi:
                maxi=dict[i]
                max_key=i
        return max_key

        
        