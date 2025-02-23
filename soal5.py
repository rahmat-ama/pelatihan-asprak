def has_duplicate_dictionary(lst):
    # dictionary ini berisi key:value, dimana key adalah
    # item yang terdapat di list dan value adalah seberapa
    # sering item tersebut muncul di list
    frequency = {}
    frekuensi = 0
    for item in lst:
        pass
def has_duplicate_set(lst):
    # set ini berisi item yang sudah pernah dilihat dalam lst
    seen = set()
    duplicate = []
    for item in lst:
        if item in seen :
            duplicate.append(item)
        seen.add(item)

    return sorted(duplicate)

def main():
    lst = [1, 2, 3, 4, 5, 6, 7, 7, 8, 8, 1, 2, 3, 4]
    print(has_duplicate_dictionary(lst))
    print(has_duplicate_set(lst))

if __name__ == "__main__":
    main()
