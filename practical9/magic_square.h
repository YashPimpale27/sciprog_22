//This function will check if square is magic or not.
int isMagicmatrix(int ** matrix, const int n) {
	int i, j;
	int off_diag_sum = 0, magic_num = 0, rowSum = 0, colSum = 0;
	
    //if number of lines is less than zero, return 0 i.e. square is not magic.
    if(n < 0) {
        return 0;
    }
	
	//calculate sum of diagonal and off diagonal elements
	for(i=0; i<n; i++){
		magic_num = magic_num + matrix[i][i];
		off_diag_sum = off_diag_sum + matrix[i][n - i - 1];
	}
	
	//if their sum is not equal, return 0 i.e. square is not magic.
	if(off_diag_sum != magic_num){
		return 0;
	}
    
    //get sum of each row and column seperately
    for(i=0; i<n; i++) {   
        for(j=0; j<n; j++) {
            rowSum = rowSum + matrix[i][j];
            colSum = colSum + matrix[j][i];
        }
		//if each row or column sum is not equal to magic number calculated above, return 0 i.e. square is not magic.
        if(rowSum != magic_num || colSum != magic_num) {
            return 0;
        }
    }
	
	//if all above conditions are meet, return 1 i.e. square is magic.
	return 1;
}

