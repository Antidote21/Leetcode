

int findNumbers(int* nums, int numsSize) {
	int i, cnt=0;
	for (int i = 0; i < numsSize; i++) {		
		if (((int)floor(log10(nums[i]))-1)%2==0){
			cnt++;
		}
	}
	return cnt;
}