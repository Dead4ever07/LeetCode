






bool containsDuplicate(vector<int>& nums) {
   map<int,int> duplicated =  {};
   for(int i = 0; i<nums.size(); i++)
   {
        duplicated[nums[i]]++;
   }
   std::map<int,int>::iterator it = duplicated.begin();
   for(; it!=duplicated.end(); it++)
   {
        if(it->second>=2)
        {
            return true;
        }
   }
   return false;
}