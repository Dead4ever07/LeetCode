bool deque_check_sorted(deque<int> v1)
{   
    deque<int> l_sorted(v1);
    sort(l_sorted.begin(), l_sorted.end());
    for(int i = 0; i < int(v1.size()); i++)
    {
        if(v1[i]!= l_sorted.at(i)){return false;}
    }
    return true;
}


int minimumRightShifts(vector<int>& nums) {
        int counter = 0;
        deque<int> queue_nums;

        while(!deque_check_sorted(queue_nums))
        {
            if(size_t(counter) >= queue_nums.size()){return -1;}
            queue_nums.push_front(queue_nums.back());
            queue_nums.pop_back();
            counter++;
        }  
        return counter;
    }