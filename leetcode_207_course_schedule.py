"""
Problem Name: Course Schedule
OJ Name: Leetcode (207)

Problem Description: 
There is a list of courses alogn with the prerequisite courses.Find out if course can be accomplished or not.

Solution Strategy:
pMap is a Hashset contains pre-requsite courses of a particular course. And visitedCourse is a set contains the course which is on traversing. In the dfs method , I have checked following conditions first:
- if course in already in the visitedCourse which means there is a loop
- if pMap of this course is empty that means course can go to further checking
After checking the conditions I have added the course in visitedCourse, run dfs using prerequisite courses and finally remove the course from visitedCourse after successful traversal. Also I haven't forgotten to make empty of the pMap of the course for validading all prerequisite courses of this course.

Complexity: O(total courses + their prerequisites)
"""

class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        pMap = {i:[] for i in range(numCourses)}
        for course , preCourse in prerequisites:
            pMap[course].append(preCourse)
        visitedCourse = set()
        def dfs(course):
            if course in visitedCourse:
                return False
            if pMap[course]==[]:
                return True
            visitedCourse.add(course)
            for courses in pMap[course]:
                if not dfs(courses):return False
            visitedCourse.remove(course)
            pMap[course] = []
            return True
        for course in range(numCourses):
            if not dfs(course):return False
        return True

        
