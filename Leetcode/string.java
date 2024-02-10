//*Given a string s, find the length of the longest 
// substring
//  without repeating characters.

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n = s.length();
        HashMap<Character, Integer> charIndex = new HashMap<>();
        int maxLength = 0;
        int start = 0;
        
        for (int end = 0; end < n; end++) {
            if (charIndex.containsKey(s.charAt(end)) && charIndex.get(s.charAt(end)) >= start) {
                start = charIndex.get(s.charAt(end)) + 1;
            }
            
            charIndex.put(s.charAt(end), end);
            maxLength = Math.max(maxLength, end - start + 1);
        }
        
        return maxLength;
    }

    public static void main(String[] args) {
        String s = "abcabcbb";
        System.out.println("lengthOfLongestSubstring(String s)");  
    }
}
