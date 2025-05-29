class Solution:
    def pushZerosToEnd(self, arr):
        non_zero_ptr = 0
        for current_ptr in range(len(arr)):
            if arr[current_ptr] != 0:
                arr[non_zero_ptr] = arr[current_ptr]
                non_zero_ptr += 1

        for i in range(non_zero_ptr, len(arr)):
            arr[i] = 0

        return arr

def main():
    sol = Solution()

    # Example input
    arr = [0, 1, 0, 3, 12]

    print("Original array:", arr)
    result = sol.pushZerosToEnd(arr)
    print("After pushing zeros to end:", result)

if __name__ == "__main__":
    main()
