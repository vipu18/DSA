bool isPalindrome(string& str) {
    // Write your code here.
    int size = str.length();
    int start = 0;
    int end = size - 1;

    if (str[start] != str[end]) {
        return false;
    }

    if (size == 1 || size == 2) {
        return true;
    }

    string strTrim = string(str.begin() + 1, str.end() - 1);
    return isPalindrome(strTrim);
}
