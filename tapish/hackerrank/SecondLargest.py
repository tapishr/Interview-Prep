//https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=7-day-campaign

if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    largest = arr[0]
    largest2 = float('-inf')
    
    for num in arr:
        if num > largest:
            largest2 = largest
            largest = num
        else:
            if num > largest2 and num != largest:
                largest2 = num
    
    print largest2
    
