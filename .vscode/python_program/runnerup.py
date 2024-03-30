# if __name__ == '__main__':
#     def solve(arr):
#      winner= -100
#      runner_up= -100
#      for i in arr:
#         if i>winner:
#          winner,runner_up=i,winner
#         elif i<winner and i > runner_up:
#             runner_up=i
#      return runner_up
            
        
#     n = int(input())
#     arr = map(int, input().split())
#     print(solve(arr))

    
if __name__ == '__main__':
    n= int(input())
    arr= list(map(int,input().split()))
    arr.sort()
    print(arr[(arr.index(max(arr)))-1])