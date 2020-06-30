
    if (!s[s.size() - x - 1])
        step++;
    for (int i = s.size() - 1; i >= s.size() - x - 1; i--)
        if (s[i])
            step++;
    cout << step;