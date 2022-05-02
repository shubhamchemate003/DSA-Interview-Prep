## Approach-1
[Editorial Link](https://www.geeksforgeeks.org/inplace-rotate-square-matrix-by-90-degrees/)  
[Solution Link](https://leetcode.com/problems/rotate-image/)  

- Divide the elements into squares or cycles for eg. 4\*4 matrix will have 2 cycles, 3\*3 will have 2 cycles etc.
- For each square cycle rotate group of four elements repeatedly



## Approach-2
[Editoiral Link](https://leetcode.com/problems/rotate-image/discuss/18872/A-common-method-to-rotate-the-image)  
[Solution Link](https://leetcode.com/submissions/detail/691614030/)
### Clockwise Rotation
first reverse up to down, then take transpose  
<pre>
1 2 3     7 8 9     7 4 1 
4 5 6  => 4 5 6  => 8 5 2 
7 8 9     1 2 3     9 6 3
</pre>

```
void rotate(vector<vector<int> > &matrix) {
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}
```

### Anticlockwise Rotation
first reverse left to right, then take transpose  
<pre>
1 2 3     3 2 1     3 6 9
4 5 6  => 6 5 4  => 2 5 8
7 8 9     9 8 7     1 4 7
</pre>

