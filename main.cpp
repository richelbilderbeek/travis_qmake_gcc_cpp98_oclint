// Example from http://docs.oclint.org/en/stable/intro/tutorial.html#something-smells-here

int main() {
    int i = 0, j = 1;
    if (j) {
        if (i) {
            return 1;
            j = 0;
        }
    }
    return 0;
}