int stu_clamp(int l, int h, int n)
{
    if (n < l){
        return (l);
         }
    if (n > h){
        return (h);
    } else{
     return (n);
        }
}
