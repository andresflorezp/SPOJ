import sys
def f(i,D):
    if(i<=0):return 0
    else:
        return max(D[i-1]+f(i-2,D),f(i-1,D))
def g(n,D):
    dp = [0 for i in range(len(D)+1)]
    for i in range(len(D)+1):
        if(i<=0):dp[i]=0
        else:dp[i]=max(D[i-1]+dp[i-2],dp[i-1])
    return dp[n]
def main():
    T = int(sys.stdin.readline().strip())
    for i in range(T):
        m = int(sys.stdin.readline().strip())
        L =[int(x) for x in sys.stdin.readline().strip().split()]
        print("Case {}: {}".format(i+1,g(len(L),L)))
main()
        
