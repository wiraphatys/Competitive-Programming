package main

import "fmt"

func twoSum(nums []int, target int) []int {
	var result = make([]int, 0, 2)
	var m = map[int]int{}

	for i := 0; i < len(nums); i++ {
		leftValue := target - nums[i]

		if _, isFound := m[leftValue]; isFound {
			// if found -> then
			result = append(result, m[leftValue], i)
			break
		}

		m[nums[i]] = i
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
