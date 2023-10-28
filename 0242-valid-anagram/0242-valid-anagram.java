class Solution {
    public boolean isAnagram(String s, String t) {


        int s_size = s.length();
        int t_size = t.length();

        if(s_size != t_size) return false;

        int[] maping_character = new int[27];

        for(int i = 0; i < s_size; i++)
        {
            maping_character[s.charAt(i) - 'a']++;
        }

        for(int i = 0; i < t_size; i++)
        {
            maping_character[t.charAt(i) - 'a']--;
        }
        
        for(int i = 1; i < 27; i++)
        {
            if(maping_character[i] != 0) return false;
        }

        return true;

    }
}