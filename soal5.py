def has_duplicate_dictionary(lst):
    frequency = {}
    for item in lst:
        frequency[item] = frequency.get(item, 0) + 1
    return frequency

def has_duplicate_set(lst):
    seen = set()
    duplicates = set()
    for item in lst:
        if item in seen:
            duplicates.add(item)
        seen.add(item)
    return duplicates

def main():
    lst = [1, 2, 3, 4, 5, 6, 7, 7, 2, 3, 3]
    print(has_duplicate_dictionary(lst))
    print(has_duplicate_set(lst))

if __name__ == "__main__":
    main()
