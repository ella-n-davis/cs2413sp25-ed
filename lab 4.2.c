void dfs(char** grid, int gridSize, int* gridColSize, int i, int j){
    if(i < 0 || i >= gridSize || j < 0 || j >= gridColSize[i] || grid[i][j] != '1'){
        return;
    }
    grid[i][j] = '#';//visited
    dfs(grid, gridSize, gridColSize, i+1, j);//down
    dfs(grid, gridSize, gridColSize, i-1, j);//up
    dfs(grid, gridSize, gridColSize, i, j+1);//r
    dfs(grid, gridSize, gridColSize, i, j-1);//l

}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int isl_count = 0;

    for(int i=0; i < gridSize; i++){
        for(int j=0; j < gridColSize[i]; j++){
            if(grid[i][j] == '1'){
                printf("Visiting cell: (%d, %d)\n", i, j);
                dfs(grid, gridSize, gridColSize, i, j);
                isl_count++;
            }
        }

    }

    return isl_count;

}
