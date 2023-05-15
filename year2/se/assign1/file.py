def fun(arr,k):
    ans=-float("inf")
    def removeelements(s,e,cursum,kn):
        nonlocal ans
        if k==0:
            if cursum>ans:
                ans=cursum
            return 
        removeelements(s+1,e,cursum+arr[s],kn-1)
        removeelements(s,e-1,cursum+arr[e],kn-1)
    removeelements(0,len(arr)-1,0,k)
    return ans
arr=[0,0,10,5,5,5,1,0,0,1]
print(fun(arr,3))

