int* breakingRecords(int scores_count, int* scores, int* result_count) {int max, min, up = 0, down = 0, itr;
    static int result[2];
    max = min = scores[0];
    for(itr = 1; itr < scores_count; itr++)
    {
        if(scores[itr] > max)
        {
            max = scores[itr];
            up++;
        }
        else if(scores[itr] < min)
        {
            min = scores[itr];
            down++;
        }
    }
    result[0] = up;
    result[1] = down;
    *result_count = 2;
    return result;
}
