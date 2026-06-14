def vowels_and_consonants(s):
    vowel_list = ['a', 'e', 'i', 'o', 'u']
    v=0
    c=0
    for ch in s:
        if ch in vowel_list:
            v += 1
        if ch.isalpha():
            if ch not in vowel_list:
                c += 1
    return v, c

str = "what the heck is this question"
v, c = vowels_and_consonants(str);
print("String Length:", len(str))
print("Vowels:", v);
print("Consonants:", c);