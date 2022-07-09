class Solution 
{
    public int romanToInt(String s) 
    {
        int sum = 0;
        int b =0;
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        map.put("I",1);
        map.put("V",5);
        map.put("X",10);
        map.put("L",50);
        map.put("C",100);
        map.put("D",500);
        map.put("M",1000);
        
        int i = s.length()-1;

        
        while(i>=0)
        {
            if(i == s.length()-1)
            {
                sum += map.get(String.valueOf(s.charAt(i)));
                b = map.get(String.valueOf(s.charAt(s.length()-1)));
            }
            
            else
            {
                int c = map.get(String.valueOf(s.charAt(i)));
                if (c<b)
                {
                    sum -= c;
        
                }
                else
                {
                    sum+=c;
                }
                
                b = c;
            }
             
            i--;
            
        }
        
        return sum;
    }
}