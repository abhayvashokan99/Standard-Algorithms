def partition(nums,low,high):
	i = low+1
	j = high
	pivot = nums[low]
	while(i<=j):
		while(nums[i]<pivot and i<high):
			i = i+1
		while(nums[j]>pivot):
			j = j-1
		if(i<j):
			nums[i],nums[j] = nums[j],nums[i]
			i = i+1
			j = j-1
		else:
			i = i+1
	nums[low] = nums[j]
	nums[j] = pivot
	return j
 
def quick_sort(nums,low,high):
	if(low>=high):
		return
	pivot_loc = partition(nums,low,high)
	quick_sort(nums,low,pivot_loc-1)
	quick_sort(nums,pivot_loc+1,high)

nums = []

print('Enter the size of list: ')
n = int(input())

print('Enter the elements of list: ')
for _ in range(n):
    nums.append(int(input()))

low = 0
high = n-1
 
quick_sort(nums,low,high)
print('Sorted list is {}'.format(nums))
