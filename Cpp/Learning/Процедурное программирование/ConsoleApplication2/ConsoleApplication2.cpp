#include <iostream>
#include <vector>
#include <algorithm>


void Merge(std::vector<int>& vec, const int& half_range, const int &end) {
    std::vector<int>sort_vec;

    auto iter_begin = vec.begin();
    auto iter_end = vec.end();

    auto iter_left_begin = vec.begin();
    auto iter_left_end = vec.end() - half_range ;
    
    if (end % 2 == 1) {
        iter_left_end-=1;

    }

    auto iter_right_begin = vec.begin() + half_range;

    auto iter_right_end = vec.end();
    int i = 0;

    for (; iter_begin != iter_end; ++iter_begin) {

        if ((iter_left_begin == iter_left_end) && (iter_right_begin != iter_right_end))  {
            sort_vec.push_back(*iter_right_begin);
            ++iter_right_begin;
        }
        else if ((iter_right_begin == iter_right_end) && (iter_left_begin != iter_left_end)) {
            sort_vec.push_back(*iter_left_begin);
            ++iter_left_begin;
        }
        else if ((*iter_left_begin <= *iter_right_begin)) {
            sort_vec.push_back(*iter_left_begin);
            ++iter_left_begin;
        }
        else if ((*iter_left_begin >= *iter_right_begin)) {
            sort_vec.push_back(*iter_right_begin);
            ++iter_right_begin;
        }
       
    }
    vec.assign(sort_vec.begin(), sort_vec.end());

}

void Sort(std::vector<int>& vec, const int& half_range) {
    std::sort(vec.begin(), vec.end() - half_range);
    std::sort(vec.begin() + half_range, vec.end());
}

void MergeSort(std::vector<int>& vec, const int& first, const int& end) {

    if (first < end) {

        int half_range = (first + end) / 2;

        Sort(vec, half_range);
        Merge(vec, half_range, end);

    }
}



int main()
{
    std::vector<int> vec{ 5,1,7,8,2,5,7,9,5,2,9,3 };


    MergeSort(vec, 0, static_cast<int> (vec.size()));




}