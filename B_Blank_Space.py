import sys input = sys.stdin.readline

t = int(input()) for ii in range(1, t + 1): n = int(input()) a = list(map(int, input().split())) f = 0 for i in a: if i == 0: f = 1 break i = 0 cnt = 0 max = 0 while i < n: if a[i] == 0: cnt = 0 while i < n and a[i] == 0: cnt += 1 i += 1 else: i += 1 if cnt > max: max = cnt if f == 0: print(0) else: print(max)