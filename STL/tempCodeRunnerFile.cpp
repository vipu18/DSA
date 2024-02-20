    cout <<"no of elements are: "<< st.size() <<endl;
    cout << st.top() << endl; //prints last element
    st.pop(); //deletes last element
    cout << st.top() << endl;
    bool flag = st.empty();
    while (!st.empty())
    {
        st.pop();
    }