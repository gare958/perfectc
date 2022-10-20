gcd(n,m) = n if m = 0
gcd(m, n%m) = gcd(n, m)

lcm(n, m) = return n * m / gcd(n, m)

