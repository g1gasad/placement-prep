class Solution:
    def __init__(self, number):
        self.number=number

    def isPrime(self):
        for i in range(2, int(self.number/2)):
            if self.number % i == 0:
                return False;
        return True
    def primeinRange(self):
        primeList=[]
        for x in range(2, self.number+1):
            prime=True
            for i in range(2, int(x**0.5)+1):
                if x % i == 0:
                    prime=False
                    break;
            if(prime):
                primeList.append(x);
        return primeList

def main():
    number=17;
    sol = Solution(number);
    ans = sol.primeinRange();
    # if ans:
    #     print(f"{number} is Prime")
    # else:
    #     print(f"{number} is Non Prime")
    print(ans)

if __name__=="__main__":
    main()