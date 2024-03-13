vector<int> gradingStudents(vector<int> grades) {
    int n,diff,tmp;
    int len=grades.size();
    for(int i=0;i<len;++i){
        if(grades[i]<38){
            continue;
        }
        tmp=grades[i];
        while(tmp%5!=0){
            tmp++;
        }
        diff=tmp-grades[i];
        if(diff<3){
            grades[i]+=diff;
        }
    }
    return grades;
}
