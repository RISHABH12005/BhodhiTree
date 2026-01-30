#include <simplecpp>
main_program{
    int l,w;
    cin>>l>>w;
    int i=1;
    repeat(l){
        int j=1;
        repeat(w){
            if(i==1||i==l||j==w)
            cout<<1;
            else cout<<0;
            j++;}
        cout<<endl;
        i++;
    }
}
