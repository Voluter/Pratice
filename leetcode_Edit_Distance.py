def minDistance(word1,word2):
    l1,l2=len(word1)+1,len(word2)+1
    arr=[[0 for _ in range(l2)] for j in range(l1)]
    for i in range(1,l1):
        arr[i][0]=i
    for j in range(1,l2):
        arr[0][j]=j
    for i in range(1,l1):
        for j in range(1,l2):
            arr[i][j]=min(arr[i-1][j]+1,arr[i][j-1]+1,arr[i-1][j-1]+(1 if word1[i-1]!=word2[j-1] else 0))
    return arr[l1-1][l2-1]
            
