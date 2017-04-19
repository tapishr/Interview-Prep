# Question at : https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=7-day-campaign
'''
Input Format
The first line contains . The second line contains an array [] of integers each separated by a space.

Output Format
Output the value of the second largest number.
'''

if __name__ == '__main__':
    n = int(input())
    arr = sorted(set(map(int, input().split())))
    print(arr[-2])
