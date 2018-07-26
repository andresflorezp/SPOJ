import sys
def main():
    T = int(sys.stdin.readline().strip())
    for i in range(T):
        N = int(sys.stdin.readline().strip())
        a = 2*N**2
        b = (-2*N)-5
        bc = b//3
        print(a+bc)
main()
