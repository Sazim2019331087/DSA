"""
Problem Name: Course Schedule II (DFS Approach)
OJ Name: Leetcode (210)

Problem Description:
There are courses along with their pre-requisite courses. Try to find out an order of courses where prerequisite course must be completed first before taking any course.

Solution Strategy:
Firstly I made a HashMap named pMap where I have put all courses and their pre-requisite courses.Then I've taken a visit set and a cycle set. Using DFS , I've taken 1 course, then check following:
- If the course is already in cycle , then output false
- If the course is in visit , then just continue with next course
If above conditions are not true , then I've pushed the course into my cycle, running dfs for all of its pre-requisites and after successful traversal, I remove the course from cycle and added it to visit set. Also I have put the course into answer.
In this way I have traversed all courses using the dfs method, and I just stopped traversal after finding false for any case . In that case I have returned empty answer.

Complexity: O(courses + pre-requisites)
"""
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        pMap = {i:[] for i in range(numCourses)}
        for course,pre_course in prerequisites:
            pMap[course].append(pre_course)
        visit,cycle = set(),set()
        answer = []
        def dfs(course):
            if course in visit:
                return True
            if course in cycle:
                return False
            cycle.add(course)
            for pre_courses in pMap[course]:
                if dfs(pre_courses)==False:
                    return False
            cycle.remove(course)
            visit.add(course)
            answer.append(course)
            return True
        for course in range(numCourses):
            if dfs(course)==False:
                answer = []
                break
        return answer

        
