package hashing;
import java.util.HashSet;

public class ContainsDuplicate {
    public static void main(String[] args) {
        
    }
}

class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> sets =new HashSet<>();
        for (int value : nums) {
            if (sets.contains(value)) {
                return true;
            }
            sets.add(value);
        }
        return false;
    }
}
