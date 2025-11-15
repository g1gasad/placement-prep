import numpy as np
x = [5, 10, 12, 18, 20, 30, 48]
y = []
# maxi = 48
# mini = 5
# for i in range(len(x)):
#     xnew = (x[i] - mini) / (maxi - mini)
#     print("%d", round(xnew, 2))
xmean = np.mean(x)
xstd = np.std(x)
for i in range(len(x)):
    xnew = round((x[i] - xmean) / xstd, 3)
    y.append(xnew)
    print(round(xnew, 2))
    
print(np.mean(y))
print(np.std(y))