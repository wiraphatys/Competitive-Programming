package main

import "fmt"

func twoSum(nums []int, target int) []int {
	var result = make([]int, 0, 2)
	var isFound bool = false

	for i := 0; i < len(nums); i++ {
		for j := i; j < len(nums); j++ {
			if j == i {
				continue
			}
			if nums[i]+nums[j] == target {
				result = append(result, i, j)
				isFound = true
				break
			}
		}
		if isFound {
			break
		}
	}

	return result
}

func main() {
	var nums = []int{2, 7, 11, 15}
	var target int = 9

	var result = twoSum(nums, target)
	for i := 0; i < len(result); i++ {
		fmt.Println(result[i])
	}
}
