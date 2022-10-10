int is_between (int low , int high , int nb )
{
    if (low < nb && nb < high){
        return 1;
    }
    return 0;
    if (low >= high){
        return 0;
    }
}
