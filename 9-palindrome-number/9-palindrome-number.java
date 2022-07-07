
class Solution 
{
    public boolean isPalindrome(int x) 
    {
        int i = 0;
        String q = Integer.toString(x);
        int j = q.length() -1;
        
        while(i<j)
        {
            if(q.charAt(i) != q.charAt(j))
                return false;
            i++;
            j--;
        }
        return true;
        
    }
}