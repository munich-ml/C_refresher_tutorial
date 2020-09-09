import math


def check_1(num):
    """
    Return True is input <int> num is 2^N, False else
    Comparator *2 solution
    """
    cmp = 1
    while cmp <= num:
        if cmp == num:
            return True     # num is 2^N
        cmp *= 2
    
    return False    # num is not 2^N
    

def check_2(num):
    """
    Return True is input <int> num is 2^N, False else
    log2 solution
    """
    if num == 0: 
        return False
        
    log2 = math.log(num) / math.log(2)
    remainder = log2 - math.floor(log2)
    return not(remainder)
    

def check_3(num):
    """
    Return True is input <int> num is 2^N, False else
    int2bin solution, e.g.  8 = 0b1000
                                   ^^^ all zeros   
    """
    if num == 0: 
        return False

    return not "1" in bin(num)[3:]

    
if __name__ == "__main__":            
    for num in [128, 127, 63, 64, 1, 0]:
        s = "num={}; checks: ".format(num)
        for func in (check_1, check_2, check_3):
            s += "{}, ".format(func(num))
        print(s)
        
