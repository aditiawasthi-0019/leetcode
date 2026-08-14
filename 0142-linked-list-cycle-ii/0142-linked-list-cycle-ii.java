import java.util.HashSet;

/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        // Use a HashSet to track visited node references
        HashSet<ListNode> visitedNodes = new HashSet<>();        
        ListNode current = head;
        while (current != null) {
            // If the set already contains the node, it's the cycle start
            if (visitedNodes.contains(current)) {
                return current;
            }            
            // Add current node reference to the set
            visitedNodes.add(current);
            current = current.next;
        }
        
        // Return null if the list ends without a cycle
        return null;
    }
}