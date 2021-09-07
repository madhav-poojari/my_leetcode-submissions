class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        lst=[]
        lst.append([1])
        if numRows>1:
            for i in range(1,numRows):
                x=[]
                for j in range(i+1):
                        if j==0 or j==i:
                                x.append(1)
                        else:
                                x.append(lst[i-1][j]+lst[i-1][j-1])
                lst.append(x)
        return lst