"""
Problem Name: Course Schedule II (Kahn's Algo Approach)
OJ Name: Leetcode (210)

Problem Description:
There are courses along with their pre-requisite courses. Try to find out an order of courses where prerequisite course must be completed first before taking any course.

Solution Strategy:
Firstly I count indegree of all courses. Then I filter the courses whose indegree equals to 0 and push these courses to a queue. After that I traverse the queue, taking 1 course from the queue and pop it while storing it to answer , and traverse its neighbours, taking 1 neighbour and decrease indegree of the course . If Indegree becomes 0 then again push it to the queue. 
After this process , I count how many courses are there in answer. If total courses in answer doesn't match existed courses , this means there is a cycle in this graph.

Complexity: O(courses + pre-requisites)
"""
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        pMap = {i: [] for i in range(numCourses)}
        indegree = {i: 0 for i in range(numCourses)}
        answer = []

        if len(prerequisites)==0:
            answer = [x for x in range(numCourses-1,0,-1)]
            answer.append(0)
            return answer
        for course, pre_course in prerequisites:
            pMap[pre_course].append(course)
            indegree[course]+=1
        
        q = collections.deque()
        for i in indegree:
            if indegree[i] == 0:
                q.append(i)
        while q:
            course = q.popleft()
            answer.append(course)
            for pre_courses in pMap[course]:
                indegree[pre_courses] -= 1
                if indegree[pre_courses] == 0:
                    q.append(pre_courses)

        if len(answer) != numCourses:
            answer = []
        return answer
