def number_pattern(n):
    if not isinstance(n, int):
        return 'Argument must be an integer value.'
    if n <= 0:
        return 'Argument must be an integer greater than 0.'
    num = []
    for i in range(1, n + 1):
        num.append(str(i))
    return " ".join(num)