

int findNumbers(int* nums, int numsSize) {
	int i, cnt=0;
	for (int i = 0; i < numsSize; i++) {		
		if (((int)floor(log10(nums[i]))-1)%2==0){
			cnt++;
		}
	}
	return cnt;
}

int findNumbers(int* nums, int numsSize) {
	int i, cnt , len = 0;
	for (int i = 0; i < numsSize; i++) {
		cnt = 0;
		while(nums[i]!=0) {
			nums[i] = nums[i] / 10;
			++cnt;
		}
		if (cnt % 2 == 0) {
			len++;
		}
	}
	return len;
}
