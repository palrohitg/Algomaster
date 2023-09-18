from typing import List




class meeting:
    def __init__(self, start, end, pos):
        self.start = start
        self.end = end
        self.pos = pos




class Solution:

    # Here Specify the list Data structures 
    def maxMeetings(self, s: List[int], e: List[int], n: int) -> None:
        meet = [meeting(s[i], e[i], i + 1) for i in range(n)]
        print(meet)
        sorted(meet, key=lambda x: (x.end, x.pos))
        answer = []
        limit = meet[0].end
        answer.append(meet[0].pos)
        for i in range(1, n):
            if meet[i].start > limit:
                limit = meet[i].end
                answer.append(meet[i].pos)
        print("The order in which the meetings will be performed is ")
        for i in answer:
            print(i, end=" ")




if __name__ == "__main__":
    obj = Solution()
    n = 6
    start = [1, 3, 0, 5, 8, 5] # we have the nth mettings, finally need to find the meetings 
    # Given the start and End time for each meetings. we need to figure out the
    # how often the maxmeetting we can have
    end = [2, 4, 5, 7, 9, 9]
    obj.maxMeetings(start, end, n)