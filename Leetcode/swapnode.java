//Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)
//Input: head = [1,2,3,4]
//Output: [2,1,4,3]

class Solution {
    public ListNode swapPairs(ListNode head) {
      
        if (head == null || head.next == null) {
            return head;
        }
        
        
        ListNode dummy = new ListNode(0); 
        dummy.next = head;
        ListNode prev = dummy;
        
        while (head != null && head.next != null) {
           
            ListNode firstNode = head;
            ListNode secondNode = head.next;
            
           
            prev.next = secondNode;
            firstNode.next = secondNode.next;
            secondNode.next = firstNode;
            
            
            prev = firstNode;
            head = firstNode.next;
        }
        
        return dummy.next;
    }
}

