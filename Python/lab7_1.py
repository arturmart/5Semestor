import random

words = [
    "apple", "banana", "cherry", "date", "elderberry", "fig", "grape", "honeydew", 
    "kiwi", "lemon", "mango", "nectarine", "orange", "papaya", "quince", "raspberry", 
    "strawberry", "tangerine", "ugli", "vanilla", "watermelon", "xigua", "yam", "zucchini", 
    "avocado", "blueberry", "cantaloupe", "dragonfruit", "eggplant", "feijoa", "guava", 
    "huckleberry", "indigo", "jackfruit", "kumquat", "lime", "mulberry", "nutmeg", "olive", 
    "persimmon", "quinoa", "radish", "spinach", "tomato", "upland", "violet", "walnut", 
    "xanadu", "yellow", "zebra", "almond", "beet", "carrot", "dandelion", "endive", "fennel", 
    "garlic", "hazelnut", "iceberg", "jalapeno", "kale", "lettuce", "melon", "nectar", 
    "oregano", "parsley", "quartz", "rhubarb", "saffron", "thyme", "umbra", "vanilla", 
    "whale", "xerox", "yeast", "zither", "amber", "bronze", "crimson", "dusk", "emerald", 
    "flame", "golden", "harbor", "ivory", "jade", "kelp", "lichen", "moss", "noir", "onyx", 
    "pearl", "quill", "rose", "sepia", "teal", "umber", "vermilion", "wisteria", "xenon", 
    "yarrow", "zephyr"
]


def write_file(file_name):
    file = open(file_name+".txt",'w')
    
    for i in range(100):
        for j in range(10):
            file.writelines(random.choice(words)+" ")
        file.writelines("\n")
        
def count_words_file(file_name):
    file = open(file_name+".txt",'r')
    data = list(file.read().split())
    
    dic = {}
    for i in data:
        if i in dic:
            dic[i]+=1
        else:
            dic[i]=1
    return dic
    

file_name = "lab7"
   
if __name__ == "__main__":
    write_file(file_name)
    print(count_words_file(file_name))
