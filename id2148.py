import sys
def main():
    T = int(sys.stdin.readline().strip())
    sys.stdin.readline().strip()
    for i in range(T):
        re =0
        
        N = int(sys.stdin.readline().strip())
        for j in range(N):
            re+=int(sys.stdin.readline().strip())
        if(re%N==0):print("YES")
        else: print("NO")
        if(i+1!=T):sys.stdin.readline().strip()

main()        
