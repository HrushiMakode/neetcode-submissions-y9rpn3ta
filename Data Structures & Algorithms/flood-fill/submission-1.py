class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        ans = [row[:] for row in image];
        prev_color = image[sr][sc]
        if prev_color == color:
            return ans

        row = len(image)
        col = len(image[0])

        ans[sr][sc] = color
        q = deque([(sr,sc)])
        

        while q:
            i , j = q.popleft()
            for di , dj in [(-1,0),(1,0),(0,-1),(0,1)]:
                ni , nj = i + di , j + dj
                if ni >= 0 and ni <  row and nj>=0 and nj<col and ans[ni][nj] == prev_color:
                    ans[ni][nj] = color
                    q.append((ni,nj))


        return ans


        